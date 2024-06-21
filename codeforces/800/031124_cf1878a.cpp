// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n, k;
  cin >> n >> k;
  bool yes = false;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    if(x == k) {
      yes = true;
    }
  }
  cout << (yes ? "YES\n" : "NO\n");
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

