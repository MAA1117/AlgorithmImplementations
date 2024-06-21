// https://codeforces.com/problemset/problem/337/A

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
  vector<int> v(m);
  for (int i = 0; i < m; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int mn = INT_MAX;
  --n;
  for (int i = n; i < m; ++i) {
    int l = v[i - n];
    int r = v[i];
    mn = min(mn, r - l);
  }
  cout << mn << '\n';
}
