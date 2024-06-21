// https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  ll n, x, ans = 0;
  scanf("%lld %lld", &n, &x);
  ll a[n];
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a[i]);
  }
  sort(a, a + n);
  // two pointers technique
  for (int i = 0, j = n - 1;;) {
    while (i < j && a[i] + a[j] > x) {
      --j;
    }
    if (i >= j) break;
    ++ans;
    ++i, --j;
  }
  printf("%lld\n", n - ans);
}
