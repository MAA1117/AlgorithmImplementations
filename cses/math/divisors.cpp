// https://cses.fi/problemset/task/1713

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll, int> find_prime_factors(ll n) {
  map<ll, int> factors;
  while (n % 2 == 0) {
    factors[2]++;
    n /= 2;
  }
  while (n % 3 == 0) {
    factors[3]++;
    n /= 3;
  }
  for (ll i = 5; i * i <= n; i += 6) {
    while (n % i == 0) {
      factors[i]++;
      n /= i;
    }
    while (n % (i + 2) == 0) {
      factors[i + 2]++;
      n /= (i + 2);
    }
  }
  if (n > 3)
    factors[n]++;
  return factors;
}

void solve() {
  ll x;
  cin >> x;
  auto factors = find_prime_factors(x);

  ll divisors = 1;
  for (auto &factor : factors) {
    divisors *= (factor.second + 1);
  }
  cout << divisors << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
}
