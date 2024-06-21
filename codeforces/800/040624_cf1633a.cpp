// https://codeforces.com/problemset/problem/1633/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n % 7 == 0) {
    cout << n << '\n';
    return;
  }
  n -= n % 10;
  do {
    if (n % 7 == 0) {
      cout << n << '\n';
      return;
    }
    ++n;
  } while (1);
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
