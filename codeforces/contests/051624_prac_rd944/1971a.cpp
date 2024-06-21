// https://codeforces.com/problemset/problem/1971/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y; cin >> x >> y;

  cout << min(x, y) << " " << max(x, y) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
