// https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int a, b, c, ans;
  cin >> a >> b >> c;
  if (b <= c) {
    b += 2 * (c - b);
  }
  if (a == b) {
    cout << 3 << '\n';
    return;
  }
  a < b ? cout << 1 : cout << 2;
  cout << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
