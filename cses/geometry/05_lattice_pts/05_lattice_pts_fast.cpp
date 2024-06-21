// https://cses.fi/problemset/task/2193

#include "timer.h"
#include <algorithm>
#include <stdio.h>
using namespace std;
typedef long long ll;

static inline ll GCD(ll a, ll b) {
  if (a == b) {
    return b;
  } else if (a == 0 || b == 0) {
    return a == 0 ? b : a;
  } else if (!(a & 1) && (b & 1)) {
    return GCD(a >> 1, b);
  } else if ((a & 1) && !(b & 1)) {
    return GCD(a, b >> 1);
  } else if (!(a & 1) && !(b & 1)) {
    return GCD(a >> 1, b >> 1) << 1;
  } else {
    ll x = min(a, b);
    ll y = max(a, b);
    return GCD((y - x) >> 1, x);
  }
}

int main() {
  Stopwatch timer;
  int n;
  scanf("%d", &n);
  ll a[n][2];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &a[i][0]);
    scanf("%lld", &a[i][1]);
  }
  ll count = 0;
  ll area = 0;
  for (int i = 0; i < n - 1; i++) {
    count += GCD(abs(a[i][0] - a[i + 1][0]), abs(a[i][1] - a[i + 1][1]));
    area += (a[i][0] - a[0][0]) * (a[i + 1][1] - a[0][1]) -
            (a[i][1] - a[0][1]) * (a[i + 1][0] - a[0][0]);
  }
  count += GCD(abs(a[n - 1][0] - a[0][0]), abs(a[n - 1][1] - a[0][1]));
  printf("%lld %lld\n", (abs(area) - count) / 2 + 1, count);
}
