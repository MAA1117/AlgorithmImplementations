// cses.fi/problemset/task/1074

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n;
  cin >> n;
  ll a[n], ans=0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a,a+n);
  ll med = a[n/2];
  for(int nx : a) {
    ans += abs(nx-med);
  }
  cout << ans << '\n';
}

int main() {
  SET_IO();
  int t = 1;
//  cin >> t;
  while (t--) {
    solve();
  }
}

