// https://codeforces.com/problemset/problem/1538/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, sm = 0;
  cin >> n;

  vector<int> v(n);
  for (auto &a : v) {
    cin >> a;
    sm += a;
  }
  if (sm % n) {
    cout << "-1\n";
    return;
  }
  int avg = sm / n, ans = 0;
  for (int i : v) {
    if (i > avg) {
      ++ans;
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
