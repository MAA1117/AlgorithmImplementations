// https://codeforces.com/problemset/problem/1926/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  string s; cin>>s;
  int cntA=0;
  for(char c:s){
    if(c=='A') ++cntA;
  }
  cout<<(cntA>2 ? "A\n" : "B\n");
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

