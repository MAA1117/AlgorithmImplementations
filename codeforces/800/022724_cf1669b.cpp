// https://codeforces.com/problemset/problem/1669/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for (int i = 2; i < n; ++i) {
    if (a[i] == a[i - 1] && a[i] == a[i - 2]) {
      cout << a[i] << '\n';
      return;
    }
  }
  cout << -1 << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
