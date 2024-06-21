// https://codeforces.com/problemset/problem/1538/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n, mni=0, mxi=0;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    if(i==0) continue;
    if(v[i]<v[mni]) {
      mni=i;
    }
    if(v[i]>v[mxi]) {
      mxi=i;
    }
  }
  int d1, d2, dmm, ans;
  d1 = min(mni, n-mni-1)+1;
  d2 = min(mxi, n-mxi-1)+1;
  dmm = abs(mni - mxi);
  if(d1<d2){
    ans = d1 + min(d2, dmm);
  }else{
    ans = d2 + min(d1, dmm);
  }
  cout << ans << '\n';

}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}

