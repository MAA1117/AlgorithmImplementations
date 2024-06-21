// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, c, d, e, ans;
  cin >> a >> b >> c;
  if (b % 3 && c < 3 - b % 3) {
    cout << "-1\n";
    return;
  }
  d = b / 3, e = b % 3 + c;
  ans = a + d + e / 3;
  if (e % 3) ++ans;
  cout << ans << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
