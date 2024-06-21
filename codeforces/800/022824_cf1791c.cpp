// https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; ++i) {
    if (s[i] == s[n - i - 1]) {
      cout << n - i * 2 << '\n';
      return;
    }
  }
  cout << n % 2 << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
