// accepted

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << '\n';
    return;
  }
  if (n < 4) {
    for (int i = 1; i <= n; i++) {
      cout << i << " ";
    }
    cout << '\n';
    return;
  }
  cout << n / 2 + n % 2 << " " << n << " ";
  for (int i = 2; i < n; i++) {
    if (i % 2 == 0) {
      cout << i / 2 << " ";
    } else {
      cout << n - i / 2 << " ";
    }
  }

  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
