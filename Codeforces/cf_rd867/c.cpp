// accepted
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll ans = n * n + 2 * (n + 1);
    cout << ans << '\n';
  }
}
