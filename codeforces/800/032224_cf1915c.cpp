// https://codeforces.com/problemset/problem/1915/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;
  ll sm = 0;
  for (int i = 0; i < n; ++i) {
    ll a;
    cin >> a;
    sm += a;
  }
  ll x = sqrt(sm);
  if (x * x == sm)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
