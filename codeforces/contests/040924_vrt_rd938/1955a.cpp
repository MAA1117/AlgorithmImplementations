// https://codeforces.com/problemset/problem/1955/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases; cin >> test_cases;
  while (test_cases--) {
    int n, a, b; cin >> n >> a >> b;
    cout << min(n/2 * b + a*(n%2), n*a) << '\n';
  }
}
