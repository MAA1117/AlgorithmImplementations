// https://codeforces.com/contest/1420/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, x, prev = INT_MAX; cin >> n;
  bool y = false;
  for(int i=0; i<n; ++i) {
    cin >> x;
    if(x>=prev){
      y = true;
    }
    prev=x;
  }
  cout << (y ? "YES\n" : "NO\n");
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

