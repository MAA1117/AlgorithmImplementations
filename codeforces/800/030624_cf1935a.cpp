// https://codeforces.com/problemset/problem/1935/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int sz = s.size();
  string s1 = s;
  reverse(s1.begin(), s1.end());
  // cout << min(s, s1+s) << '\n';
  for (int i = 0; i < sz; ++i) {
    if (s[i] == s1[i])
      continue;
    else if (s[i] < s1[i]) {
      cout << s << '\n';
      return;
    } else {
      cout << s1 << s << '\n';
      return;
    }
  }
  cout << s << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
