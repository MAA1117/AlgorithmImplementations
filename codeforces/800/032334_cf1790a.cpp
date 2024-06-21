// https://codeforces.com/problemset/problem/1790/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

const string pi_str = "314159265358979323846264338327";

void solve() {
  string s;
  cin>>s;
  int ans=0;
  for(size_t i=0; i<s.size(); ++i){
    if(s[i] == pi_str[i]) {
      ++ans;
    }else{
      break;
    }
  }
  cout<<ans<<'\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}

