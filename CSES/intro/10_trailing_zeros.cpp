// https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  // general solution for finding the number of trailing zeros in n!
  for (int i = 5; i <= n; i *= 5) {
    ans += n / i;
  }
  cout << ans << '\n';
}
