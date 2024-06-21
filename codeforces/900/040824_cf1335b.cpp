// https://codeforces.com/problemset/problem/1335/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  // find string s of length n s/t each substring of length a has exactly
  // b distinct letters
  string s = "";
  for (int i = 0; i < n; ++i) {
    if (i % a < b) {
      s += (char)('a' + i % a);
    } else {
      s += (char)('a' + (b - 1));
    }
  }
  cout << s << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
