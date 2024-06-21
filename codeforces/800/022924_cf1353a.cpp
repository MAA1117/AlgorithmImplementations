// https://codeforces.com/problemset/problem/1353/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n == 1) {
    cout << 0 << '\n';
  } else if (n == 2) {
    cout << m << '\n';
  } else {
    cout << 2 * m << '\n';
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
