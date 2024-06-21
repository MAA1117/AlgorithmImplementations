// https://codeforces.com/problemset/problem/1593/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(k);
  for (int &x : v) {
    cin >> x;
  }
  sort(v.begin(), v.end());
  ll sm = 0;
  int cnt = 0;
  for (int i = k - 1; i >= 0; --i) {
    if (sm >= v[i]) {
      break;
    } else {
      ++cnt;
      sm += n - v[i];
    }
  }
  cout << cnt << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
