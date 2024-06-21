// https://codeforces.com/problemset/problem/1650/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  string s;
  cin>>s;
  char c;
  cin>>c;
  int sz=s.size();
  for(int i=0; i<sz; i+=2) {
    if(s[i]==c) {
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";

}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

}
