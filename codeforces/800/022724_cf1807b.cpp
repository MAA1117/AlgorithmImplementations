// https://codeforces.com/problemset/problem/1807/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int even = 0, odd = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a & 1)
      odd += a;
    else
      even += a;
  }
  cout << (even > odd ? "YES\n" : "NO\n");
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
