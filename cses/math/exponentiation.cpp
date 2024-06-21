#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

ll power(ll a, ll b) {
  ll result = 1;
  while (b > 0) {
    if (b % 2) {
      result = result * a % MOD;
    }
    a = a * a % MOD;
    b /= 2;
  }
  return result;
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  while (n--) {
    ll a, b;
    cin >> a >> b;
    ll ans = power(a, b);
    cout << ans << '\n';
  }
}
