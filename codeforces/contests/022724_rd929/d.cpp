// incomplete
#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

void solve() {
  int n;
  cin >> n;
  int even = 0;
  int odd = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x % 2)
      ++odd;
    else
      ++even;
  }
  if ((even > 0 && odd > 0) && (even >= odd)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
