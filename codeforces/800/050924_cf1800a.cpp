// https://codeforces.com/problemset/problem/1800/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool m = false, e = false, o = false, w = false;
  for (int i = 0; i < n; ++i) {
    if (!m) {
      while (s[i] == 'm' || s[i] == 'M') {
        m = true;
        ++i;
      }
      --i;
      if (!m) {
        cout << "NO\n";
        return;
      }
      continue;
    }
    if (!e) {
      while (s[i] == 'e' || s[i] == 'E') {
        e = true;
        ++i;
      }
      --i;
      if (!e) {
        cout << "NO\n";
        return;
      }
      continue;
    }
    if (!o) {
      while (s[i] == 'o' || s[i] == 'O') {
        o = true;
        ++i;
      }
      --i;
      if (!o) {
        cout << "NO\n";
        return;
      }
      continue;
    }
    if (s[i] != 'w' && s[i] != 'W') {
      cout << "NO\n";
      return;
    } else {
      w = true;
    }
  }
  if (m==false || e==false || o==false || w==false) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
