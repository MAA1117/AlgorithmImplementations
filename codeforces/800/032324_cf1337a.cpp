// https://codeforces.com/problemset/problem/1337/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // triangle inequality theorem:
  // for a, b, c to form a triangle, the following must all be true:
  // a+b > c 
  // a+c > b 
  // b+c > a 

  if(b+b>c){
    cout<<b<<" "<<b<<" "<<c<<'\n';
  } else {
    cout<<b<<" "<<c<<" "<<c<<'\n';
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

