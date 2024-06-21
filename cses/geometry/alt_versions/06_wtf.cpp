// written by user 'ammojamo' https://cses.fi/user/84621/

#include <limits.h>
#include <stdio.h>
// #include <time.h>
// #define TIMING

#define N 200000
#define X 1000000000

#define PX(a) ((a)&0xffffffff)
#define PY(a) ((a) >> 32)

static inline int getint() {
  int x, y, m = 1;
  while ((x = getchar_unlocked()) < '-') {
  }
  if (x == '-') {
    m = -1;
    x = 0;
  } else {
    x -= '0';
  }
  while ((y = getchar_unlocked()) >= '0') {
    x = x * 10 + y - '0';
  }
  return x * m;
}

static int morton[256] = {
    0,   1,   16,  17,  2,   3,   18,  19,  32,  33,  48,  49,  34,  35,  50,
    51,  4,   5,   20,  21,  6,   7,   22,  23,  36,  37,  52,  53,  38,  39,
    54,  55,  64,  65,  80,  81,  66,  67,  82,  83,  96,  97,  112, 113, 98,
    99,  114, 115, 68,  69,  84,  85,  70,  71,  86,  87,  100, 101, 116, 117,
    102, 103, 118, 119, 8,   9,   24,  25,  10,  11,  26,  27,  40,  41,  56,
    57,  42,  43,  58,  59,  12,  13,  28,  29,  14,  15,  30,  31,  44,  45,
    60,  61,  46,  47,  62,  63,  72,  73,  88,  89,  74,  75,  90,  91,  104,
    105, 120, 121, 106, 107, 122, 123, 76,  77,  92,  93,  78,  79,  94,  95,
    108, 109, 124, 125, 110, 111, 126, 127, 128, 129, 144, 145, 130, 131, 146,
    147, 160, 161, 176, 177, 162, 163, 178, 179, 132, 133, 148, 149, 134, 135,
    150, 151, 164, 165, 180, 181, 166, 167, 182, 183, 192, 193, 208, 209, 194,
    195, 210, 211, 224, 225, 240, 241, 226, 227, 242, 243, 196, 197, 212, 213,
    198, 199, 214, 215, 228, 229, 244, 245, 230, 231, 246, 247, 136, 137, 152,
    153, 138, 139, 154, 155, 168, 169, 184, 185, 170, 171, 186, 187, 140, 141,
    156, 157, 142, 143, 158, 159, 172, 173, 188, 189, 174, 175, 190, 191, 200,
    201, 216, 217, 202, 203, 218, 219, 232, 233, 248, 249, 234, 235, 250, 251,
    204, 205, 220, 221, 206, 207, 222, 223, 236, 237, 252, 253, 238, 239, 254,
    255};

void radix_sort_morton(unsigned long *x, int n, unsigned long *t) {
  static int freq[8][256];
  static unsigned long *qp[256];
  unsigned long *src, *dst;

  for (int i = 0; i < n; i++) {
    unsigned long v = x[i];
    for (int p = 0; p < 8; p++) {
      freq[p][((v & 0xf00000000L) >> 28) | (v & 0xf)]++;
      v >>= 4;
    }
  }

  for (int p = 0; p < 8; p++) {
    src = (p & 1) ? t : x;
    dst = (p & 1) ? x : t;

    qp[0] = dst;
    for (int i = 1; i < 256; i++) {
      qp[morton[i]] = qp[morton[i - 1]] + freq[p][morton[i - 1]];
    }

    unsigned long m1 = 0xf00000000UL << (p * 4), m2 = 0xfUL << (p * 4);

    for (int i = 0; i < n; i++) {
      int b = (src[i] & m1) >> (28 + p * 4) | (src[i] & m2) >> (p * 4);
      *qp[b]++ = src[i];
      __builtin_prefetch(qp[b] + 1);
    }
  }
}

void radix_sort_masked(unsigned long *x, int n, unsigned long *t,
                       unsigned long mask) {
  static int freq[8][256];
  static unsigned long *qp[256];
  unsigned long *src, *dst;

  for (int i = 0; i < n; i++) {
    unsigned long v = x[i] & mask;
    for (int p = 0; p < 8; p++) {
      freq[p][v & 0xff]++;
      v >>= 8;
    }
  }

  for (int p = 0; p < 8; p++) {
    src = (p & 1) ? t : x;
    dst = (p & 1) ? x : t;

    qp[0] = dst;
    for (int i = 1; i < 256; i++) {
      qp[i] = qp[i - 1] + freq[p][i - 1];
    }

    for (int i = 0; i < n; i++) {
      int b = ((src[i] & mask) >> (p * 8)) & 0xff;
      *qp[b]++ = src[i];
      __builtin_prefetch(qp[b] + 1);
    }
  }
}

static long min(long a, long b) { return a < b ? a : b; }

static long d2(unsigned long a, unsigned long b) {
  long dx = PX(a) - (long)PX(b);
  long dy = PY(a) - (long)PY(b);
  return dx * dx + dy * dy;
}

int main() {
  static unsigned long xy[N], t[N];
  int n = getint();

#ifdef TIMING
  clock_t t0 = clock();
  clock_t t1;
#endif

  for (int i = 0; i < n; i++) {
    unsigned long x = getint() + X;
    unsigned long y = getint() + X;
    xy[i] = x + (y << 32);
  }

#ifdef TIMING
  t1 = clock();
  printf("read: %f\n", (double)(t1 - t0) / CLOCKS_PER_SEC);
  t0 = t1;
#endif

  radix_sort_morton(xy, n, t);

#ifdef TIMING
  t1 = clock();
  printf("morton sort: %f\n", (double)(t1 - t0) / CLOCKS_PER_SEC);
  t0 = t1;
#endif

  // Calculate grid size
  unsigned long minw = ~0L;
  for (int i = 1; i < n; i++) {
    unsigned long w = xy[i - 1] ^ xy[i];
    w = (w >> 32) | (w & 0xffffffffUL);
    if (w < minw) {
      minw = w;
    }
  }

  // Grid mask
  int c = 63 - __builtin_clzll(minw);
  unsigned long gs = 1 << c;
  unsigned long m = ~0UL << c;
  m = (m & 0xffffffffUL) | ((m & 0xffffffffUL) << 32);

  radix_sort_masked(xy, n, t, m);

#ifdef TIMING
  t1 = clock();
  printf("grid sort: %f\n", (double)(t1 - t0) / CLOCKS_PER_SEC);
  t0 = t1;
#endif

  long r = LONG_MAX;

  // Linear scan through grid
  for (int i = 0, j = 0, k = 0; i < n - 1; i++) {
    unsigned long gx0 = PX(xy[i] & m);
    unsigned long gy0 = PY(xy[i] & m);

    while (j < n - 3 && PY(xy[j] & m) <= gy0) {
      j++;
    }
    while (j < n - 3 && PY(xy[j] & m) == gy0 + gs && PX(xy[j] & m) < gx0 - gs) {
      j++;
    }

    if (k < j) {
      k = j;
    }
    while (k < n - 1 && PY(xy[k] & m) <= gy0 + gs) {
      k++;
    }
    while (k < n - 1 && PY(xy[k] & m) == gy0 + gs * 2 && PX(xy[k] & m) < gx0) {
      k++;
    }

    r = min(r, d2(xy[i], xy[i + 1]));
    if (j > i) {
      r = min(r, d2(xy[i], xy[j]));
      r = min(r, d2(xy[i], xy[j + 1]));
      r = min(r, d2(xy[i], xy[j + 2]));
    }
    if (k > i) {
      r = min(r, d2(xy[i], xy[k]));
    }
  }

#ifdef TIMING
  t1 = clock();
  printf("grid scan: %f\n", (double)(t1 - t0) / CLOCKS_PER_SEC);
  t0 = t1;
#endif

  printf("%ld\n", r);
}
