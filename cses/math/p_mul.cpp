// https://cses.fi/problemset/task/2185

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }

int main() {
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  vector<ll> primes(k);
  for (auto &p : primes) {
    cin >> p;
    ans += n / p;
  }
  sort(primes.begin(), primes.end());

  // Figure out how to apply Euler's totient function
  // https://en.wikipedia.org/wiki/Euler%27s_totient_function

  ll product = primes[0];
  for (int i = 1; i < k; ++i) {
    if (product > n / primes[i] || primes[i] > n / product) break;
    ans -= n / (product * primes[i]);

    if (i + 1 < k && product > n / primes[i+1]) break;
    product *= primes[i+1];
  }

  cout << ans << '\n';
}
