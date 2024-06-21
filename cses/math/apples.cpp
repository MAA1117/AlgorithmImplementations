#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

const ll MOD = 1E9 + 7;
const ll MAX = 2E6;

vector<ll> fact(MAX + 1);
vector<ll> inv_fact(MAX + 1);

ll power(ll a, ll b, ll mod) {
  ll result = 1;
  while (b > 0) {
    if (b % 2) result = (result * a) % mod;
    a = (a * a) % mod;
    b /= 2;
  }
  return result;
}

void precompute_factorials() { 
  fact[0] = 1;
  for (int i = 1; i <= MAX; ++i) {
    fact[i] = (fact[i - 1] * i) % MOD;
  }
  
  // Fermat's little theorem
  
  // a^p == a (mod p) 
  
  // if p does not divide a:
  //    a^(p-1) == 1 (mod p)
  
  inv_fact[MAX] = power(fact[MAX], MOD - 2, MOD);  
  for (int i = MAX - 1; i >= 0; --i) {
    inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
  }
}

ll binomial_coefficient(ll n, ll k) {
  if (k > n) return 0;
  return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

int main() {
  ll n, m;
  cin >> n >> m;

  precompute_factorials();

  cout << binomial_coefficient(n + m - 1, n - 1) << '\n';
}
