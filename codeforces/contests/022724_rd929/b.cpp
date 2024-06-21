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
  int mod_sm = 0;
  bool one = false;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    mod_sm += x % 3;
    if (x % 3 == 1) one = true;
  }
  if (mod_sm % 3 == 0) {
    cout << 0 << '\n';
  } else if (mod_sm % 3 == 2) {
    cout << 1 << '\n';
  } else {
    if (one == true) {
      cout << 1 << '\n';
    } else {
      cout << 2 << '\n';
    }
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
