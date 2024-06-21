// https://codeforces.com/problemset/problem/935/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

std::vector<ll> find_divisors(ll n) {
  std::vector<ll> divisors;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      if (i != n / i) {
        divisors.push_back(n / i);
      }
    }
  }
  return divisors;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> v = find_divisors(n);
  cout << v.size() + 1 << '\n';
}
