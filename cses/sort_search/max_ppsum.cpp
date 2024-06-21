// https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  ll ans = v[0], ansl = 0, ansr = 0, sm = 0, mn_sm = 0, mn_pos = -1;
  for (int r = 0; r < n; ++r) {
    sm += v[r];
    ll cur = sm - mn_sm;
    if (cur > ans) {
      ans = cur;
      ansl = mn_pos + 1;
      ansr = r;
    }
    if (sm < mn_sm) {
      mn_sm = sm;
      mn_pos = r;
    }
  }
  cout << ans << '\n';
}
