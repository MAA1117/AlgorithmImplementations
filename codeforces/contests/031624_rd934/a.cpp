// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, k, ans;
  cin >> n >> k;
  int b = n * (n - 1) / 2;
  if (k >= n - 1)
    ans = 1;
  else
    ans = n;
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
