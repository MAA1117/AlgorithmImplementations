// https://codeforces.com/problemset/problem/1542/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (int it : a) {
    if (it % 2) {
      count++;
    }
  }
  if (count == n) {
    puts("Yes");
  } else {
    puts("No");
  }
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
