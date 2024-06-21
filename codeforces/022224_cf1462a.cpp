// https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a) {
    cin >> x;
  }
  vector<ll> b;
  for (ll i = 0; i < n; i++) {
    if (i % 2 == 0) {
      b.push_back(a[i / 2]);
    } else {
      b.push_back(a[n - i / 2 - 1]);
    }
  }

  for (ll &x : b) {
    cout << x << " ";
  }
  cout << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
