// https://codeforces.com/problemset/problem/1765/E

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n, a, b, ans = 0;
  cin >> n >> a >> b;
  if (a > b) {
    ans = 1;
  } else {
    ans = n / a;
    if (n % a) ++ans;
  }
  cout << ans << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
