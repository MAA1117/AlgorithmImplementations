// https://codeforces.com/problemset/problem/1760/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n, nx, mx=0;
  cin >> n;
  vector<int> v(n), c(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    c[i]=v[i];
  }
  sort(v.begin(), v.end());
  for(int i=0; i<n; ++i) {
    c[i]-=v[n-1];
    if(c[i]==0) c[i]=v[n-1]-v[n-2];
  }
  
  for(int &nx : c) {
    cout<<nx<<' ';
  }
  
  cout<<'\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}

