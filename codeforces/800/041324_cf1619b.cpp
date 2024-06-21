// https://codeforces.com/problemset/problem/1619/B

#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

void solve() {
  ll n, ans = 1;
  cin >> n;
  for (ll i = 2; i * i <= n; ++i) {
    ++ans;
    if (i * i * i <= n) {
      ll x = sqrt(i * i * i);
      if (x * x != i * i * i) ++ans;
    }
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
