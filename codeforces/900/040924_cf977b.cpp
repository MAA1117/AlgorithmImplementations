// https://codeforces.com/problemset/problem/977/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  unordered_map<string, int> mp;
  for (int i = 1; i < n; ++i) {
    string tmp = {s[i - 1], s[i]};
    if (mp.find(tmp) == mp.end()) {
      mp[tmp] = 1;
    } else {
      ++mp[tmp];
    }
  }
  string ans;
  int mx = 0;
  for (auto i : mp) {
    if (i.second > mx) {
      mx = i.second;
      ans = i.first;
    }
  }
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases = 1;
  while (test_cases--) {
    solve();
  }
}
