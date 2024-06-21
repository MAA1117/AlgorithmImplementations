// https://codeforces.com/problemset/problem/1248/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n, m;
  cin >> n;
  int even1 = 0, odd1 = 0, even2 = 0, odd2 = 0;
  for (int i = 0; i < n; ++i) {
    int nx;
    cin >> nx;
    if (nx % 2)
      ++odd1;
    else
      ++even1;
  }
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int mx;
    cin >> mx;
    if (mx % 2)
      ++odd2;
    else
      ++even2;
  }
  ll ans = (ll)odd1 * (ll)odd2 + (ll)even1 * (ll)even2;
  cout << ans << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
