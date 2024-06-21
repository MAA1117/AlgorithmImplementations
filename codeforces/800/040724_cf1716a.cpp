// https://codeforces.com/problemset/problem/1716/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n == 1)
    cout << "2\n";
  else
    cout << n / 3 + (bool)(n % 3) << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
