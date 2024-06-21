// accepted
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
  cout << 2 * (a[n - 1] - a[0] + a[n - 2] - a[1]) << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
