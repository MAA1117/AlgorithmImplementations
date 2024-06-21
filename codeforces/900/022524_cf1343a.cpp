// https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (n == 3) {
    cout << 1 << '\n';
    return;
  }
  for (int i = 4; i <= n + 1; i *= 2) {
    if (n % (i - 1) == 0) {
      cout << n / (i - 1) << '\n';
      return;
    }
  }
  cout << "hwat..." << endl;
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
