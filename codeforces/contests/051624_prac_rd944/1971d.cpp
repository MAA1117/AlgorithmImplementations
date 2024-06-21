// https://codeforces.com/problemset/problem/1971/D

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;
  int ans = 1;
  bool zero_one = false;

  for (size_t i = 1; i < s.size(); ++i) {
    if (s[i] != s[i-1]) ++ans;
    if (s[i] > s[i-1]) zero_one = true;
  }
  if (zero_one) --ans;

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
