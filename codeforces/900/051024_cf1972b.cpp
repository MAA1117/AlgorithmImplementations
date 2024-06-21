// https://codeforces.com/problemset/problem/1972/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  for (auto c : s) {
    if (c == 'U') ++cnt;
  }
  cout << (cnt % 2 ? "YES\n" : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
