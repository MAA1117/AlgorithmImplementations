// https://codeforces.com/problemset/problem/1186/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  if(m<n || k<n) cout << "No\n";
  else cout << "Yes\n";
}

int main() {
  SET_IO();
  int t = 1;
//  cin >> t;
  while (t--) {
    solve();
  }
}

