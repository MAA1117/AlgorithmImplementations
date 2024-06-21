// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;
#define SET_IO                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);
typedef long long ll;

// binomial coefficient formula
// (n choose k) = n! / (k! * (n - k)!)
ll bc(ll n, ll k) {
  //  if (k > n - k) {
  //    k = n - k;
  //  }
  ll result = 1;
  for (ll i = 0; i < k; ++i) {
    result *= n - i;
    result /= i + 1;
  }
  return result;
}

int main() {
  SET_IO
  ll n;
  cin >> n;
  ll x = 0;
  cout << 0 << '\n';
  for (ll i = 2; i < n + 1; i++) {
    ll ans = bc(i * i, 2);
    x += i - 2;
    ans -= 8 * x;
    cout << ans << '\n';
  }
}
