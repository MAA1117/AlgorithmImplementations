// https://codeforces.com/problemset/problem/1850/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; ++i) {
    pair<int, int> pr;
    int a, b;
    cin >> a >> b;
    pr = {a, b};
    v.push_back(pr);
  }
  int h = 0;
  int hp = 0;
  for (int i = 0; i < n; ++i) {
    if (v[i].first > 10) continue;
    if (v[i].second > h) {
      h = v[i].second;
      hp = i;
    }
  }
  cout << ++hp << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
