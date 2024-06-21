// https://codeforces.com/problemset/problem/1325/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define int long long

void solve() {

  int n, rpts=0;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i=1; i<n; ++i) {
    if(v[i]==v[i-1]) ++rpts;
  }
  cout << n-rpts << '\n'; 
}

signed main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}
