// https://codeforces.com/problemset/problem/1927/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt1=0, cnt2=0;
  for(size_t i=0; i<s.size(); ++i) {
    if(s[i] != 'B')
      ++cnt1;
    else break;
  }
  reverse(s.begin(), s.end());
  for(size_t i=0; i<s.size(); ++i) {
    if(s[i] != 'B')
      ++cnt2;
    else break;
  }
  cout << s.size() - cnt1 - cnt2 << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

