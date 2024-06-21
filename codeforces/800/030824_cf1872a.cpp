// https://codeforces.com/problemset/problem/1872/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d, ans;
  cin >> a >> b >> c;
  d = abs(a - b);
  c *= 2;
  ans = d / c;
  if (d % c) ++ans;
  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
