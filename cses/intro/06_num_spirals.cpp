// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  //  FREOPEN_IN;
  int t;
  cin >> t;
  while (t--) {
    u8 y, x;
    u8 ans;
    cin >> y >> x;
    if (x >= y) {
      if (x % 2) {
        ans = x * x - (y - 1);
      } else {
        ans = (x - 1) * (x - 1) + y;
      }
    } else {
      if (y % 2 == 0) {
        ans = y * y - (x - 1);
      } else {
        ans = (y - 1) * (y - 1) + x;
      }
    }
    cout << ans << '\n';
  }
}
