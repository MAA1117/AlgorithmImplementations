// https://codeforces.com/problemset/problem/1873/D

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, k, ans = 0;
  cin >> n >> k;
  string s;
  cin >> s;

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'B') {
      ++ans;
      i += k - 1;
    }
  }

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
