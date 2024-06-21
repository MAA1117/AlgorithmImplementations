// https://codeforces.com/problemset/problem/1925/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

vector<ll> find_divisors(ll n) {
  vector<ll> divisors;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      divisors.push_back(n / i);
    }
  }
  sort(divisors.begin(), divisors.end());
  divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());
  return divisors;
}

void solve() {
  ll x, n;
  cin >> x >> n;
  if (n == 1) {
    cout << x << '\n';
    return;
  }
  vector<ll> divs = find_divisors(x);
  reverse(divs.begin(), divs.end());
  for (ll div : divs) {
    if (div * n <= x) {
      cout << div << '\n';
      return;
    }
  }
  cout << 1 << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
