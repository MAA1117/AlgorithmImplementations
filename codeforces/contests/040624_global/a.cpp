// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, cnt0 = 0, cnt1 = 0;
  cin >> n;

  string s;
  cin >> s;
  for (char c : s) {
    if (c == '0')
      ++cnt0;
    else
      ++cnt1;
  }

  if (cnt1 % 2) {
    cout << "NO\n";
    return;
  }
  if (cnt1 == 2) {
    for (int i = 1; i < n; ++i) {
      if (s[i] == '1' && s[i - 1] == '1') {
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
