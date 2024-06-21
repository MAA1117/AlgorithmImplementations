// accepted
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; ++i) {
    cin >> a[i];
  }
  while (a[0] == 0) {
    a.erase(a.begin());
  }
  reverse(a.begin(), a.end());
  while (a[0] == 0) {
    a.erase(a.begin());
  }
  ll count=0;
  ll sz = a.size();
  for (ll i = 0; i < sz; ++i) {
    if(a[i]==0){
      ++count;
    }
  }
  cout << count << '\n';

}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
