// https://codeforces.com/problemset/problem/556/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int n; cin >> n;
  string s; cin >> s;
  int ones=0;
  for(int i=0; i<n; ++i) {
    if(s[i]=='1') ++ones;
  }
  int diff = abs((n - ones) - ones);
  cout << diff << '\n';
}

