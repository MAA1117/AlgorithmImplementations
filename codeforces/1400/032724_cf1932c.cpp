// https://codeforces.com/problemset/problem/1932/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  ll n, m, product = 1;
  cin >> n >> m;
  vector<ll> a(n), ans(n);
  for (ll &nx : a) {
    cin >> nx;
  }
  string s;
  cin >> s;

  // find the index of the element that will be last remaining
  int idx_last;
  {deque<int> dq(n);
  iota(dq.begin(), dq.end(), 0);
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == 'L')
      dq.pop_front();
    else
      dq.pop_back();
  }
  idx_last = dq.front();}

  // apply operations in reverse order so that modular multiplication can be
  // used instead of division
  int idx = idx_last, l = 0, r = 0;
  reverse(s.begin(), s.end());
  ans[0] = a[idx] % m;
  for (int i = 1; i < n; ++i) {
    if (s[i] == 'L') {
      ++l;
      idx = idx_last - l;
    } else {
      ++r;
      idx = idx_last + r;
    }
    ans[i] = ans[i - 1] * a[idx] % m;
  }
  reverse(ans.begin(), ans.end());
  for (ll nx : ans) cout << nx << " ";
  cout << '\n';
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) solve();
}
