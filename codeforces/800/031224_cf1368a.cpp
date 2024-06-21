// https://codeforces.com/problemset/problem/1368/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, n, cnt = 0;
  cin >> a >> b >> n;
  if (a < b) swap(a, b);
  for (int i = 0; i < n; ++i) {
    if (a + b > n) {
      cout << ++cnt << '\n';
      return;
    }
    b += a;
    if (a < b) swap(a, b);
    ++cnt;
  }
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
