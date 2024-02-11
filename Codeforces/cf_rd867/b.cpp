// accepted
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << max(a[n - 1] * a[n - 2], a[0] * a[1]) << '\n';
    // can be optimized with add/sub instead of mult?
  }
}
