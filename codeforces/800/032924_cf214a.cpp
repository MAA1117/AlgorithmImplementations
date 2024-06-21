// https://codeforces.com/problemset/problem/214/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();

  int n, m;
  cin >> n >> m;
  // a^2 + b = n
  // a + b^2 = m
  int ans = 0;
  for (int a = 0; a <= 1000; ++a) {
    for (int b = 0; b <= 1000; ++b) {
      if (a*a + b == n && a + b*b == m) {
        ++ans;
      }
    }
  }
  cout << ans << '\n';
}
