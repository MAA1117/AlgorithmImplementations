// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

bool is_caps(char c) {
  if (c < 'a')
    return true;
  else
    return false;
}

int main() {
  SET_IO();
  string s;
  cin >> s;
  int sz = s.size();
  if (sz == 1 && is_caps(s[0])) {
    cout << (char)(s[0] + 32) << '\n';
    return 0;
  }
  for (int i = 1; i < sz; ++i) {
    if (!is_caps(s[i])) {
      cout << s << '\n';
      return 0;
    }
  }
  for (int i = 0; i < sz; ++i) {
    cout << (is_caps(s[i]) ? (char)(s[i] + 32) : (char)(s[i] - 32));
  }
  cout << '\n';
}
