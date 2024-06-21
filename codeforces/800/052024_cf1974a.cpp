// https://codeforces.com/problemset/problem/1974/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y; cin >> x >> y;

  int ans = y/2 + y%2;
  int open = 7*ans + 4*(y%2);
  x -= open;
  x = max(0, x);
  ans += x/15 + (bool)(x%15);

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
