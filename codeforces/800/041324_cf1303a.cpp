// https://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int sz = s.size(), ans = 0;

  for (int i=0, j=sz-1; i<j; ++i) {
    if(!i) {
      while(s[i] == '0') ++i;
      if(i>=j) break;
      while(s[j] == '0') --j;
      if(i>=j) break;
    }
    if(s[i] == '0') ++ans;
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
