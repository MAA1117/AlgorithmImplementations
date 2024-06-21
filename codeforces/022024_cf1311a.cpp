// https://codeforces.com/problemset/problem/1311/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

void solve() {
  ll a, b;
  cin >> a >> b;
  ll ans;
  if (a == b) {
    cout << 0 << '\n';
    return;
  }
  if (a > b) {
    (a - b) % 2 ? cout << 2 : cout << 1;
    cout << '\n';
    return;
  }
  (b - a) % 2 ? cout << 1 : cout << 2;
  cout << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
