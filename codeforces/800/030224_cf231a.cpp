// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int ans=0;
  for (int i = 0; i < n; ++i) {
    int cnt=0;
    for(int j=0; j<3; ++j){
      int x;
      cin>>x;
      if(x==1) ++cnt;
    }
    if(cnt>1) ++ans;
  }
  cout<<ans<<'\n';
}

