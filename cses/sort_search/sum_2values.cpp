// cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

const int MXN = 2E5;

int main() {
  int n, x;
  cin >> n >> x;
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int nx;
    cin >> nx;
    if (mp.find(x - nx) != mp.end()) {
      cout << mp[x - nx] + 1 << " " << i + 1 << '\n';
    }
    mp[nx] = i;
  }
  cout << "IMPOSSIBLE\n";
}
