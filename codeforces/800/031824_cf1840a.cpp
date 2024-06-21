// https://codeforces.com/problemset/problem/1840/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n;
  cin >> n;

  string s; cin>>s;
  vector<char> v;
  for(int i=0; i<n; ++i){
    int l=i, r=i+1;
    v.push_back(s[l]);
    while(s[r] != s[l]) ++r;
    i=r;
  }
  for(char c:v) cout << c;
  cout << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}


