// cses.fi/problemset/task/1715

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

const ll mod = 1e9 + 7;

namespace modop {
ll madd(ll a, ll b) { return (a + b) % mod; }
ll msub(ll a, ll b) { return (((a - b) % mod) + mod) % mod; }
ll mmul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll mpow(ll base, ll exp) {
  ll res = 1;
  while (exp) {
    if (exp % 2 == 1) {
      res = (res * base) % mod;
    }
    exp >>= 1;
    base = (base * base) % mod;
  }
  return res;
}
ll minv(ll base) { return mpow(base, mod - 2); }
ll mdiv(ll a, ll b) { return mmul(a, minv(b)); }

const ll FACTORIAL_SIZE = 1.1e6;
ll fact[FACTORIAL_SIZE], ifact[FACTORIAL_SIZE];
bool __factorials_generated__ = 0;
void gen_factorial(ll n) {
  __factorials_generated__ = 1;
  fact[0] = fact[1] = ifact[0] = ifact[1] = 1;

  for (ll i = 2; i <= n; i++) {
    fact[i] = (i * fact[i - 1]) % mod;
  }
  ifact[n] = minv(fact[n]);
  for (ll i = n - 1; i >= 2; i--) {
    ifact[i] = ((i + 1) * ifact[i + 1]) % mod;
  }
}
ll nck(ll n, ll k) {
  if (!__factorials_generated__) {
    cerr << "Call gen_factorial" << endl;
    exit(1);
  }
  if (k < 0 || n < k)
    return 0;
  ll den = (ifact[k] * ifact[n - k]) % mod;
  return (den * fact[n]) % mod;
}
} // namespace modop
using namespace modop;

ll count_permutations(string& s) {
  gen_factorial(s.size());
  unordered_map<char, int> mp;
  for (char c : s) mp[c]++;
  ll denom = 1;
  for (auto& p : mp) denom = mmul(denom, ifact[p.second]);
  return mmul(fact[s.size()], denom);
}

int main() {
  SET_IO();
  string s;
  cin >> s;
  ll ans = count_permutations(s);
  cout << ans << '\n';
}
