// https://codeforces.com/problemset/problem/1391/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);
  for(auto x : v) {
    cout << x << " ";
  }
  cout << endl;
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
