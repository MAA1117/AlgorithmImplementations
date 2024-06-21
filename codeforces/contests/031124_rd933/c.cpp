// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  for (int i = 2; i < n; ++i) {
    if (s[i] == 'p' && s[i - 1] == 'a' && s[i - 2] == 'm') {
      ++cnt;
    }
    if (s[i] == 'e' && s[i - 1] == 'i' && s[i - 2] == 'p') {
      ++cnt;
    }
    if (i > 3 && s[i] == 'e' && s[i - 1] == 'i' && s[i - 2] == 'p' &&
        s[i - 3] == 'a' && s[i - 4] == 'm') {
      --cnt;
    }
  }
  cout << cnt << '\n';
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
