// https://cses.fi/problemset/task/2193

#include "timer.h"
#include <algorithm>
#include <stdio.h>
using namespace std;
typedef long long ll;

static inline ll getint() {
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
  ll n = getint();
  ll a[n][2];
  for (ll i = 0; i < n; i++) {
    a[i][0] = getint();
    a[i][1] = getint();
  }
  ll count = 0;
  ll area = 0;
  for (ll i = 0; i < n - 1; i++) {
    count += GCD(abs(a[i][0] - a[i + 1][0]), abs(a[i][1] - a[i + 1][1]));
    area += (a[i][0] - a[0][0]) * (a[i + 1][1] - a[0][1]) -
            (a[i][1] - a[0][1]) * (a[i + 1][0] - a[0][0]);
  }
  count += GCD(abs(a[n - 1][0] - a[0][0]), abs(a[n - 1][1] - a[0][1]));
  printf("%lld %lld\n", (abs(area) - count) / 2 + 1, count);
}
