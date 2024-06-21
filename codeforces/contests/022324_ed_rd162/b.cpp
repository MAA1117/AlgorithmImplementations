// solved post-contest
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);  // health
  for (ll &x : a) {
    cin >> x;
  }
  vector<ll> x(n);  // pos
  for (ll &n : x) {
    cin >> n;
  }
  vector<pair<ll, ll>> pairs(n);
  for (int i = 0; i < n; ++i) {
    pairs[i] = {abs(x[i]), a[i]};
  }
  sort(pairs.begin(), pairs.end(),
       [](auto a, auto b) { return a.first < b.first; });
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += pairs[i].second;
    if (sum > 1LL * pairs[i].second * k) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
