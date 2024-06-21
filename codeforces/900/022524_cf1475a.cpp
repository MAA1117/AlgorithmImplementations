// https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  ll n;
  cin >> n;
  if (n & (n - 1))
    puts("YES");
  else
    puts("NO");

#if 0
  // or
  while (n > 2 && !(n % 2)) {
    n /= 2;
  }
  n % 2 ? puts("YES") : puts("NO");
#endif

}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
