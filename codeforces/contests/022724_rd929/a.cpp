// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int sm = 0;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a < 0) a *= -1;
    sm += a;
  }
  cout << sm << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
