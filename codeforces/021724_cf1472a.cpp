#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  ll w, h, n;
  cin >> w >> h >> n;
  ll div_w = 0;
  ll div_h = 0;
  while (w % 2 == 0) {
    w /= 2;
    div_w++;
  }
  while (h % 2 == 0) {
    h /= 2;
    div_h++;
  }
  ll pieces = 1 << (div_w + div_h);
  string ans = pieces < n ? "NO" : "YES";
  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
