// https://codeforces.com/problemset/problem/1850/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  vector<char> v;
  for (int i = 0; i < 64; i++) {
    char c;
    cin >> c;
    if (c != '.') {
      v.push_back(c);
    }
  }
  for (char c : v) {
    cout << c;
  }
  cout << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
