// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c) {
    cout << "STAIR\n";
  } else if (a < b && b > c) {
    cout << "PEAK\n";
  } else {
    cout << "NONE\n";
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
