// https://codeforces.com/problemset/problem/1358/C
// difficulty: 1600

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

  ll ans = (x2 - x1) * (y2 - y1) + 1;

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
