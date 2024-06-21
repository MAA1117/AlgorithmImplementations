// https://codeforces.com/problemset/problem/1527/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n;
  cin >> n;
  int lz = __builtin_clz(n);
  cout << (1<<(31-lz))-1 << '\n'; 
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) solve();

}

