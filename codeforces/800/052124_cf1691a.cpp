// https://codeforces.com/problemset/problem/1691/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, odd = 0;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int nx;
    cin >> nx;
    odd += nx & 1;
  }

  cout << min(odd, n - odd) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
