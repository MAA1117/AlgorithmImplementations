// solved post-contest
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

void solve() {
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    if (a[i] < 0) {
      cout << "NO\n";
      return;
    }
    if (i + 2 >= n && a[i] != 0) {
      cout << "NO\n";
      return;
    }
    if (a[i] != 0) {
      a[i + 1] -= 2 * a[i];
      a[i + 2] -= a[i];
      a[i] = 0;
    }
  }
  cout << "YES\n";
}

int main() {
  SET_IO();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
