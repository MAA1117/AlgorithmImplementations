// https://cses.fi/problemset/task/1712

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

ll power(ll a, ll b, ll p) {
  ll result = 1;
  while (b > 0) {
    if (b % 2) {
      result = result * a % p;
    }
    a = a * a % p;
    b /= 2;
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll p = MOD;
    ll x = power(b, c, p - 1); // phi = p - 1 for prime p
    ll ans = power(a, x, p);
    cout << ans << '\n';
  }
}
