// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int l[n], r[m];
  for(int i=0; i<n; ++i) {
    cin >> l[i];
  }
  for(int i=0; i<m; ++i) {
    cin >> r[i];
  }
  int cnt = 0;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<m; ++j) {
      if(l[i] + r[j] <= k) {
        ++cnt;
      }
    }
  }
  cout << cnt << '\n';
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

