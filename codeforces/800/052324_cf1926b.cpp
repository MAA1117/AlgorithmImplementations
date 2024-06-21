// https://codeforces.com/problemset/problem/1926/B

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<string> v(n);
  for (auto &s : v) cin >> s;

  int mx = 0;
  for (auto s : v) {
    int cnt = 0;
    for (auto c : s) {
      if (c == '1') ++cnt;
    }
    if (mx) {
      if (cnt != mx) {
        cout << "TRIANGLE\n";
        return;
      } else {
        cout << "SQUARE\n";
        return;
      }
    }
    mx = max(mx, cnt);
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
