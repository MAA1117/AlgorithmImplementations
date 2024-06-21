// https://codeforces.com/problemset/problem/1475/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (!(n % 2021) || !(n % 2020)) {
    puts("YES");
    return;
  }
  int tmp = n;
  while (tmp >= 2020) {
    tmp -= 2020;
    n -= 2021;
    if ((!(n % 2021) || !(n % 2020)) || (!(tmp % 2021) || !(tmp % 2020))) {
      puts("YES");
      return;
    }
  }
  puts("NO");
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
