// https://codeforces.com/problemset/problem/1948/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n;
  cin >> n;

  if(n%2){
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  for(int i=1; i<=n/2; ++i){
    if(i%2) cout<<"AA";
    else cout<<"BB";
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

