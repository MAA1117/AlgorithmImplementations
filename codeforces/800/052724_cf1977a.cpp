// https://codeforces.com/problemset/problem/1977/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m; cin>>n>>m;
  if (n>=m && (n-m)%2 != 1) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
