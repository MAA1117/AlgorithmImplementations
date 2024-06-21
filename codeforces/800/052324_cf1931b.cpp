// https://codeforces.com/problemset/problem/1931/B

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  ll sm = 0;
  for (auto &nx : v) {
    cin >> nx;
    sm += nx;
  }
  reverse(v.begin(), v.end());

  ll avg = sm / n;
  ll open = 0;

  for (int i = 0; i < n; ++i) {
    open += avg - v[i];
    if (open < 0) {
      cout << "NO\n";
      return;
    }
  }
  if (open)
    cout << "NO\n";
  else
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
