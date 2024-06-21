// https://codeforces.com/problemset/problem/233/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

void solve() {
  ll n;
  cin >> n;
  if (n & 1) {
    cout << -1 << '\n';
    return;
  }
  for (int i = 1; i <= n; i++) {
    i & 1 ? cout << i + 1 : cout << i - 1;
    cout << " ";
  }
  cout << '\n';
}

int main() {
  SET_IO();
  solve();
}
