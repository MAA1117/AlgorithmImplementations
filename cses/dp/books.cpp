// https://cses.fi/problemset/task/1158

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

const int MXN = 1000, MXX = 1E5;

int h[MXN], s[MXN], dp[MXX];

int main() {
  int n, x;
  cin >> n >> x;
  for (int i = 0; i < n; ++i) {
    cin >> h[i];  // price
  }
  for (int i = 0; i < n; ++i) {
    cin >> s[i];  // pages
  }
  for (int i = 0; i < n; ++i) {
    for (int j = x; j >= h[i]; --j) {
      dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
    }
  }
  cout << dp[x] << '\n';
}
