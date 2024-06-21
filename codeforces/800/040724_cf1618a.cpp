// https://codeforces.com/problemset/problem/1618/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> v(7);
  for (auto &a : v) cin >> a;
  for (int i = 0; i < 7; ++i) {
    for (int j = i + 1; j < 6; ++j) {
      for (int k = j + 1; k < 6; ++k) {
        if (v[i] + v[j] + v[k] == v[6]) {
          cout << v[i] << " " << v[j] << " " << v[k] << '\n';
          return;
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
