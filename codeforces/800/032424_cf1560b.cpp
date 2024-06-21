// https://codeforces.com/problemset/problem/1560/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int circ = 2 * abs(a - b);
  if (a > circ || b > circ || c > circ) {
    cout << "-1\n";
  } else {
    int ans = c + circ / 2;
    if (ans > circ) ans -= circ;
    cout << ans << '\n';
  }
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
