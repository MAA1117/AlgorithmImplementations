// https://codeforces.com/problemset/problem/1660/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, ans;
  cin >> a >> b;
  if(a>0) {
    ans = a + 2*b + 1;
  } else {
    ans = 1;
  }
  cout<<ans<<'\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}

