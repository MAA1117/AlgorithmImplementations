// https://codeforces.com/problemset/problem/1957/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  int ans = 0;
  sort(v.begin(), v.end());
  for (int i = 0, j = i + 1; i < n - 1; ++i) {
    int same = 1;
    while (j < n && v[i] == v[j]) {
      ++same, ++j;
    }
    ans += same / 3;
    i = j - 1;
    ++j;
  }
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
