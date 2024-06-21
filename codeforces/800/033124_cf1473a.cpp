// https://codeforces.com/problemset/problem/1473/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, d;
  cin >> n >> d;
  int a[n];
  for(int i=0; i<n; ++i) {
    cin >> a[i];
  }
  sort(a, a+n);
  if(a[n-1] <= d || a[0] + a[1] <= d) {
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

