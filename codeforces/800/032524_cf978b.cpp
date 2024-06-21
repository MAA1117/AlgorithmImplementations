// https://codeforces.com/problemset/problem/978/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int n, cnt=0; cin>>n;
  string s; cin>>s;
  for(int i=2; i<n; ++i) {
    if(s[i]=='x' && s[i-1]=='x' && s[i-2]=='x') ++cnt;
  }
  cout<<cnt<<'\n';
}
