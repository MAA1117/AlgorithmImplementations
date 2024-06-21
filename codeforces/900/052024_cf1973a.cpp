// https://codeforces.com/problemset/problem/1973/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int p1, p2, p3; 
  cin >> p1 >> p2 >> p3;

  if ((p1 + p2 + p3) % 2) {
    cout << "-1\n";
    return;
  }

  int a[] = {p1, p2, p3};
  int ans = 0;

  while (a[0] + a[1] != 0) {
    --a[1], --a[2], ++ans;
    sort(a, a+3);
  } 

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
