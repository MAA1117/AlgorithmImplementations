// https://codeforces.com/problemset/problem/1593/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int abc[3], mx=0;
  cin>>abc[0]>>abc[1]>>abc[2];
  for(int i=0; i<3; ++i){
    mx=max(abc[i], mx);
  }
  for(int i=0; i<3; ++i){
    int ans = mx-abc[i];
    for(int j=0; j<3; ++j){
      if(j==i) continue;
      if(abc[i]+ans<=abc[j]){
        ++ans;
      }
    }
    cout<<ans<<" ";
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

