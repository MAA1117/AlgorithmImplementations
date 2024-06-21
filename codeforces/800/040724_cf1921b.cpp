// https://codeforces.com/problemset/problem/1921/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s, f;
  cin >> s >> f;

  int s_cnt1 = 0, f_cnt1 = 0, mismatched = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == f[i]) continue;
    ++mismatched;
    if (s[i] == '1')
      ++s_cnt1;
    else
      ++f_cnt1;
  }
  int ans = mismatched - min(s_cnt1, f_cnt1);

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
