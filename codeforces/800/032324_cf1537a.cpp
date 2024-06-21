// https://codeforces.com/problemset/problem/1537/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n, sm=0;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    sm+=v[i];
  }
  if(sm<n){
    cout<<1<<'\n';
  }else if(sm==n){
    cout<<0<<'\n';
  }else{
    cout<<sm-n<<'\n';
  }
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}

