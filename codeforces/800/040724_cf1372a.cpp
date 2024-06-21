// https://codeforces.com/problemset/problem/1372/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
      cout << i % 2 + i - 1 << " ";
      // or just cout << 1 << " ";
    }
    cout << '\n';
  }
}
