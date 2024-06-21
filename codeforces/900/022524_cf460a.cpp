// https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  SET_IO();
  int n, m;
  cin >> n >> m;
  int cnt = 0;
  while (n > 0) {
    --n;
    ++cnt;
    if (cnt % m == 0) {
      ++n;
    }
  }
  cout << cnt << endl;
  // or ans = n + (n - 1) / (m - 1);
}
