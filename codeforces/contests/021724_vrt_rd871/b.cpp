// accepted
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
  int w1 = 0;
  int w2 = 0;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    v[i] = x;
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      w1++;
    } else {
      w1 = 0;
    }
    w2 = max(w1, w2);
  }
  cout << w2 << '\n';
}

int main() {
  SET_IO;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
