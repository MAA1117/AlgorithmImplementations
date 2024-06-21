// https://codeforces.com/problemset/problem/1692/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;

  set<int> a;
  for (int i = 0; i < n; ++i) {
    int nx;
    cin >> nx;
    a.insert(nx);
  }
  int sz = a.size();
  int ans = sz - (n%2 ^ sz%2); 
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
