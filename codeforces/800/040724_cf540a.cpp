// https://codeforces.com/problemset/problem/540/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int n, ans = 0;
  cin >> n;
  string s, f;
  cin >> s >> f;

  for (int i = 0; i < n; ++i) {
    int a = s[i] - '0', b = f[i] - '0';
    int d = abs(a - b);
    ans += min(d, 10 - d);
  }
  cout << ans << '\n';
}
