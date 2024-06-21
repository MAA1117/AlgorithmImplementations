// https://codeforces.com/problemset/problem/1950/D

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

vector<int> bd;

bool check(int n) {
  string s = to_string(n);
  for (char c : s) {
    if (c != '0' && c != '1') return false;
  }
  return true;
}

bool ans(int n) {
  if(n==1) return true;
  bool good = false;
  for(int i : bd) {
    if(n % i == 0) {
      good |= ans(n / i);
      if(good) return true;
    }
  }
  return good;
}

void solve() {
  int n;
  cin >> n;
  if(ans(n)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  SET_IO();
  for (int i = 2; i < 100001; ++i) {
    if (check(i)) bd.push_back(i);
  }
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
