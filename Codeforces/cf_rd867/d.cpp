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
  if (n % 2) {
    cout << -1 << '\n';
    return;
  }
  int s = n - 1;
  cout << n << " " << s << " ";
  for (int i = 2; i < n; i++) {
    if (i % 2 == 0) {
      int a = (n + 1) - s;
      cout << a << " ";
      s = a;
    } else {
      int a = (n - 1) - s;
      cout << a << " ";
      s = a;
    }
  }
  cout << '\n';
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
