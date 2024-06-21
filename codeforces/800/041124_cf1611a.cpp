// https://codeforces.com/problemset/problem/1611/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s = to_string(n);
  n = s.size();
  if ((s[n-1] - '0') % 2 == 0) {
    cout << "0\n";
  } else if ((s[0] - '0') % 2 == 0) {
    cout << "1\n";
  } else {
    for (auto c : s) {
      if ((c - '0') % 2 == 0) {
        cout << "2\n";
        return;
      }
    }
    cout << "-1\n";
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

