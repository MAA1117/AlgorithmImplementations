// https://codeforces.com/problemset/problem/1808/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = unsigned long long;

void solve() {
  ll n, m;
  cin >> n >> m;
  ll cards[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      ll a;
      cin >> a;
      cards[i][j] = a;
    }
  }
  ll sum = 0;
  for (int i = 0; i < m; ++i) {
    vector<int> v(n);
    for (int j = 0; j < n; ++j) {
      v[j] = cards[j][i];
      //      for (int k = j + 1; k < n; ++k) {
      //        sum += abs(cards[j][i] - cards[k][i]);
      //      } // too slow
    }
    sort(v.begin(), v.end());
    ll psum = v[0];
    for (int j = 1; j < n; ++j) {
      psum += v[j];
      sum += v[j] * (ll)(j + 1) - psum; // Watch for overflow caused by using
                                        // i32 in intermediate calculations.
    }
  }
  cout << sum << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
