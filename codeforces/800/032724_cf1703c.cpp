// https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  for (int i = 0; i < n; ++i) {
    int b;
    cin >> b;
    string s;
    cin >> s;
    for (char c : s) {
      if (c == 'D') {
        ++v[i];
        v[i] %= 10;
      } else {
        --v[i];
        if (v[i] < 0) v[i] += 10;
      }
    }
  }
  for (int nx : v) cout << nx << " ";
  cout << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) solve();
}
