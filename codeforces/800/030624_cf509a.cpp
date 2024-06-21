// https://codeforces.com/problemset/problem/509/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

ll f(ll x){
  ll sm=1;
  while(x){
    sm*=x;
    --x;
  }
  return sm;
}

int main() {
  ll n;
  cin >> n;
  if(n==1) {
    cout << 1 << endl;
    return 0;
  }
  --n;
  // (2*n)! / (n!)^2
  ll ans = f(2*n) / (f(n) * f(n));
  cout << ans << endl;
}


