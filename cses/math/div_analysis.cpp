#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

// Given the prime factorization of a number (k), print the number of divisors,
// sum of divisors, and product of divisors of k -- all mod 1e9+7.

int main() {
  ll n; cin >> n; // number of distinct prime factors

  vector<pair<ll,ll>> factors(n);
  for (auto &nx : factors) {
    cin >> nx.first >> nx.second; // base, exponent
  }
  // [Out] -> num_divisors, sum_divisors, product_divisors (all mod 1e9+7)


}
