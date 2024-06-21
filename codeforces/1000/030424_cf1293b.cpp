// https://codeforces.com/problemset/problem/1293/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef long double llf;

int main() {
  int n;
  cin >> n;
  llf sm = 0;
  for (int i = 1; i <= n; ++i) {
    sm += (llf)1 / (llf)i;
  }
  cout << setprecision(15) << sm << '\n';
}
