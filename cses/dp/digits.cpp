#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll M = 1e6 + 1;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> a(n + 1, M);
  a[0] = 0LL;
  for (ll i = 1; i < 10; i++) {
    a[i] = 1LL;
  }
  for (ll i = 10; i <= n; i++) {
    string s = to_string(i);
    for (char c : s) {
      ll x = c - '0';
      a[i] = min(a[i - x] + 1LL, a[i]);
    }
  }
  cout << a[n] << endl;
}
