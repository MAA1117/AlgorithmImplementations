// accepted
// hacked (TLE)
#include <bits/stdc++.h>
using namespace std;
#define SET_IO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a) {
    cin >> x;
  }
  ll x;
  ll yrs = 0;
  for (int i = 0; i < n; i++) {
    ll tmp = a[i];
    if (a[i] > yrs) {
      yrs = a[i];
    } else {
      while (yrs >= a[i]) {
        a[i] += tmp;
      }
      yrs = a[i];
    }
  }
  cout << yrs << '\n';
}

int main() {
  SET_IO;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
