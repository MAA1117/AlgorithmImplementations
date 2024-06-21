// https://codeforces.com/problemset/problem/1702/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int m, x = 0;
  cin >> m;
  while (pow(10, x) <= m) {
    ++x;
  }
  --x;
  int ans = pow(10, x);
  cout << m - ans << '\n';
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
