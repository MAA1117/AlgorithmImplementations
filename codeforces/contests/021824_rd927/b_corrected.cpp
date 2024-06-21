// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll yrs = 0;
  for (ll &x : a) {
    cin >> x;
    yrs = (yrs / x + 1) * x;
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
