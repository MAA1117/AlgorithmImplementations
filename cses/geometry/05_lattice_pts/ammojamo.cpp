#include "timer.h"
#include <stdio.h>

#define N 1002
#define X 1000000002

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

struct pt {
  long x, y;
};

static inline long gcd(long a, long b) {
  while (b) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

static inline long abs(long a) { return a > 0 ? a : -a; }

int main() {
  Stopwatch timer;
  static struct pt p[N];
  int n = getint();

  for (int i = 0; i < n; i++) {
    p[i].x = getint();
    p[i].y = getint() + X;
  }
  p[n] = p[0];
  p[n + 1] = p[1];

  long a = 0, b = 0;

  // Normalise clockwise
  for (int i = 0; i < n; i++) {
    long dx = p[i + 1].x - p[i].x;
    long yy = p[i + 1].y + p[i].y;
    a += dx * yy;
  }
  if (a < 0) {
    for (int i = 0; i <= n + 1; i++) {
      p[i].x = -p[i].x;
    }
  }
  a = 0;

  for (int i = 0; i < n; i++) {
    long dx = p[i + 1].x - p[i].x;
    long dy = p[i + 1].y - p[i].y;
    long dx2 = p[i + 2].x - p[i + 1].x;
    long dy2 = p[i + 2].y - p[i + 1].y;
    long yy = p[i].y + p[i + 1].y;

    long k =
        dx2 * dy - dx * dy2; // Tells us whether vertex is concave or convex

    if (dx > 0) {
      long t = gcd(dx, abs(dy)); // Number of lattice points on this segment - 1
      b += t;

      // Add all lattice points on/below this segment
      a += ((yy + 1) * (dx + 1) + t + 1) / 2 - p[i + 1].y - 1;

      if (dx2 < 0 || (dx2 == 0 && k > 0)) {
        a += p[i + 1].y + 1;
      }
      if (dx2 < 0 && k < 0) {
        a--;
      }
    } else if (dx < 0) {
      long t =
          gcd(-dx, abs(dy)); // Number of lattice points on this segment - 1
      b += t;

      // Subtract all lattice points below this segment
      a -= ((yy + 1) * (-dx + 1) - (t + 1)) / 2 - p[i + 1].y;

      if (dx2 > 0 || (dx2 == 0 && k > 0)) {
        a -= p[i + 1].y;
      }
      if (dx2 > 0 && k < 0) {
        a--;
      }
    } else {
      b += abs(dy);

      if (dy < 0 && dx2 > 0) {
        a -= p[i + 1].y + 1;
      }
      if (dy > 0 && dx2 < 0) {
        a += p[i + 1].y;
      }
    }
  }

  printf("%ld %ld\n", a - b, b);
}
