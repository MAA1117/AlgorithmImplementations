// https://codeforces.com/problemset/problem/1760/B

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
  string s;
  cin >> s;
  int mx = 0;
  for (char c : s) {
    mx = max(c - 'a' + 1, mx);
  }
  cout << mx << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
