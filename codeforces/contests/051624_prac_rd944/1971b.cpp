// https://codeforces.com/problemset/problem/1971/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;
  int sz = s.size();
  bool y = false;

  for (int i=1; i<sz; ++i) {
    if (s[i] != s[i-1]) {
      swap(s[i], s[i-1]);
      y = true;
      break;
    }
  }

  if (y)
    cout << "YES\n" << s << '\n';
  else
    cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
