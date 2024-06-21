// https://codeforces.com/problemset/problem/686/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  ll n, x;
  cin >> n >> x;
  int cntd = 0;
  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c;
    ll d;
    cin >> d;
    if (c == '+') {
      x += d;
    } else if (x - d < 0) {
      ++cntd;
    } else {
      x -= d;
    }
  }
  cout << x << " " << cntd << '\n';
}
