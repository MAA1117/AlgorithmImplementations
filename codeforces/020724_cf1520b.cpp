// https://codeforces.com/problemset/problem/1520/B

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t U8;
typedef int64_t I8;
#define REVERSE [](int a, int b) { return a > b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO                                                                 \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr)
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (n < 10) {
    cout << n << '\n';
    return;
  }
  int ans = 0;
  for (ll i = 1; i <= n; i = i * 10 + 1) {
    for (ll j = 1; j < 10; j++) {
      if (i * j <= n) {
        ans++;
      }
    }
  }
  cout << ans << '\n';
}

int main() {
  SET_IO;

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
