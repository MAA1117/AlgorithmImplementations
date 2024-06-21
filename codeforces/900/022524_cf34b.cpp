// https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> tvs(n);
  for (int i = 0; i < n; ++i) {
    cin >> tvs[i];
  }
  sort(tvs.begin(), tvs.end());
  int sm = 0;
  for (int i = 0; i < m; ++i) {
    if (tvs[i] < 0) {
      sm += tvs[i];
    } else {
      break;
    }
  }
  cout << -1 * sm << endl;
}
