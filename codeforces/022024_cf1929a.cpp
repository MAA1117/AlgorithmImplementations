// https://codeforces.com/problemset/problem/1929/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &x : v) cin >> x;
  sort(v.begin(), v.end());
  cout << v[n - 1] - v[0] << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
