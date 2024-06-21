// https://codeforces.com/problemset/problem/1553/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n, ans;
  cin >> n;
  ans = n/10;
  if(n%10==9) ++ans;
  cout<<ans<<'\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--)
    solve();

}

