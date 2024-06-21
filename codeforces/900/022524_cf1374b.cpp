// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 0 << '\n';
    return;
  }
  int twos = 0, threes = 0;
  while (n % 2 == 0) {
    ++twos;
    n /= 2;
  }
  while (n % 3 == 0) {
    ++threes;
    n /= 3;
  }
  if (twos + threes == 0 || twos > threes || n > 3) {
    cout << -1 << '\n';
    return;
  }
  int ans = threes + threes - twos;
  cout << ans << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
