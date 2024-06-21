#include "timer.h"
#include <stdio.h>

// pick: area = interior + border/2 - 1
//       2 * area = 2 * interior + border - 2

// calculam numarul de puncte de pe margine folosind cancer

using ll = long long;

int gcd(int a, int b) {
  int r;

  while (b) {
    r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int laticiale(int dx, int dy) {
  return gcd(dx < 0 ? -dx : dx, dy < 0 ? -dy : dy) - 1;
}

const int MAXN = 2e5;

struct Point {
  int x, y;
} p[MAXN];

int main() {
  Stopwatch timer;
  int n, i, j;
  ll double_area, border, interior;

  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d%d", &p[i].x, &p[i].y);

  double_area = 0;
  border = n;
  for (i = 0; i < n; i++) {
    j = (i + 1) % n;

    double_area += ((ll)(p[i].y + p[j].y)) * (p[i].x - p[j].x);
    border += laticiale(p[i].x - p[j].x, p[i].y - p[j].y);
  }

  interior = ((double_area < 0 ? -double_area : double_area) - border) / 2 + 1;

  printf("%lld %lld\n", interior, border);

  return 0;
}
