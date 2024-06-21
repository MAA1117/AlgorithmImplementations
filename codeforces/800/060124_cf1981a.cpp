// https://codeforces.com/problemset/problem/1981/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int l, r; cin >> l >> r;
  int num = 1, ans = 0;
  do {
    num <<= 1;
    ++ans;
  } while (num <= r);

  cout << --ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
