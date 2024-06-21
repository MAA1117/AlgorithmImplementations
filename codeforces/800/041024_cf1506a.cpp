// https://codeforces.com/problemset/problem/1506/A

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, m, x;
  cin >> n >> m >> x;
  // x (by columns) -> x (by rows)
  
  ll row = (x - 1) % n + 1;
  ll column = (x - 1) / n;
  ll ans = (row - 1) * m + column + 1;

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
