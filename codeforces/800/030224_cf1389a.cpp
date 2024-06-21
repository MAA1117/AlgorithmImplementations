// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int l, r;
  cin >> l >> r;
  if (r < 2 * l) {
    cout << "-1 -1\n";
  } else {
    cout << l << " " << 2 * l << '\n';
  }
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
