// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
#define REVERSE [](int a, int b) { return a > b; }
typedef long long ll;
typedef double lf;

void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll cnt = 0;
  ll mx_cnt = 0;
  ll prev = LLONG_MIN;
  for (ll &x : v) {
    cin >> x;
    if (x > prev) {
      cnt++;
    } else {
      cnt = 1;
    }
    prev = x;
    mx_cnt = max(cnt, mx_cnt);
  }
  cout << mx_cnt << '\n';
}

int main() {
  SET_IO();
#if 0
  int t;
  cin >> t;
  while (t--) {
#endif
  solve();
}
