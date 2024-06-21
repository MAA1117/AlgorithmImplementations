// https://codeforces.com/problemset/problem/1669/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  bool parity_0 = v[0]%2, parity_1 = v[1]%2;
  for (int i = 2; i < n; ++i) {
    if(i%2==0 && v[i]%2 != parity_0) {
      cout<<"NO\n";
      return;
    }
    if(i%2 && v[i]%2 != parity_1) {
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

}

