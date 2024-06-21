// https://codeforces.com/problemset/problem/1690/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, a[] = {3, 2, 1}, sm = 6;
  cin >> n;
  while (sm < n) {
    if (a[1] - a[2] > 1)
      ++a[2], ++sm;
    else if (a[0] - a[1] > 1)
      ++a[1], ++sm;
    else
      ++a[0], ++sm;
  }
  cout << a[1] << " " << a[0] << " " << a[2] << '\n';
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
