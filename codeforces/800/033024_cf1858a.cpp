// https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) {
    cout << (c % 2 ? "First\n" : "Second\n");
  } else if (a > b) {
    cout << "First\n";
  } else {
    cout << "Second\n";
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
