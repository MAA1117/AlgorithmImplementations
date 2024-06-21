// https://codeforces.com/problemset/problem/1579/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  string s;
  cin >> s;
  int sz = s.size();
  if (sz % 2) {
    cout << "NO\n";
    return;
  }
  int cntb = 0;
  for (auto c : s) {
    if (c == 'B') ++cntb;
  }
  if (cntb == sz / 2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
