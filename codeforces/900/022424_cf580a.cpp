// https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main(){
  int n;
  cin >> n;
  int cnt=1;
  int h=1;
  int prev;
  cin >> prev;
  for(int i=1; i<n; ++i){
    ll x;
    cin >> x;
    if(x>=prev){
      ++cnt;
      h=max(h,cnt);
    }else{
      cnt=1;
    }
    prev=x;
  }
  cout << h << endl;
}
