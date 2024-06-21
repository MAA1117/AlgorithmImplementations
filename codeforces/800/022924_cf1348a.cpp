// https://codeforces.com/problemset/problem/1348/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;

#if 0
  ll sm1 = pow(2, n), sm2 = 0;
  for (int i = 1; i < n / 2; ++i) {
    sm1 += pow(2, i);
  }
  for (int i = n / 2; i < n; ++i) {
    sm2 += pow(2, i);
  }
  cout << sm1 - sm2 << '\n';
#endif

  cout << pow(2, n/2 + 1) - 2 << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
