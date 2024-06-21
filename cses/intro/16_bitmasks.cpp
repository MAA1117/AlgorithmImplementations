// https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, p[20];

int main() {
  cin >> n;
  ll s = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> p[i], s += p[i];
  }
  // I have no idea what's happening here
  for (int i = 0; i < (1 << n); i++) {
    ll t = 0;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1) {
        t += p[j];
      }
    }
    if (t <= s / 2) {
      ans = max(ans, t);
    }
  }
  cout << s - 2 * ans << endl;
}
