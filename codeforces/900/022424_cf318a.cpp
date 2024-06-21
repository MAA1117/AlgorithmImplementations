// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  SET_IO();
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  if (k <= n / 2 + n % 2) {
    ans = k * 2 - 1;
  } else {
    ans = ((k - n / 2) - (n % 2)) * 2;
  }
  cout << ans << endl;
}
