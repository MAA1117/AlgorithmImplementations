// https://codeforces.com/problemset/problem/1490/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a) {
    cin >> i;
  }
  int ans = 0;
  for (int i=1; i<n; ++i) {
    int mx = max(a[i], a[i-1]);
    int mn = min(a[i], a[i-1]);
    while (mx > 2*mn) {
      ++ans;
      mn += mn;
    }
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
