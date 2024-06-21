// https://codeforces.com/problemset/problem/1675/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  // a->dogfood, b->catfood, c->eitherfood, x->dogs, y->cats

  x -= a, y -= b;
  if (max(x, 0) + max(y, 0) > c)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
