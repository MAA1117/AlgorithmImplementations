// https://codeforces.com/problemset/problem/1846/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    if (a > b) ++ans;
  }
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
