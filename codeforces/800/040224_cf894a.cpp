// https://codeforces.com/problemset/problem/894/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.size(), ans = 0;
  for (int i = 0; i < n; ++i) {
    if(s[i] != 'Q') continue;
    for (int j = i+1; j < n; ++j) {
      if (s[j] != 'A') continue;
      for (int k = j+1; k < n; ++k) {
        if (s[k] != 'Q') continue;
        ++ans;
      }
    }
  }
  cout << ans << '\n';
}
