// https://codeforces.com/problemset/problem/1971/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d; cin >> a >> b >> c >> d;

  if (a < b) swap(a, b);
  if (c < d) swap(c, d);

  bool y = false;

  if (a > c && b > d && c > b) y = true; 
  else if (a < c && b < d && d < a) y = true;

  if (y) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
