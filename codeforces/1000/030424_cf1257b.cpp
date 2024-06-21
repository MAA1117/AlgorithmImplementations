// https://codeforces.com/problemset/problem/1257/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int x, y;
  cin >> x >> y;
  if((x==1 && x!=y) || (x<4 && y>3)) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }

}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

