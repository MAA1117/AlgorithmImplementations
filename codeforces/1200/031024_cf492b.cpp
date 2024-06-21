// https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  int n, l;
  cin >> n >> l;
  int a[n + 2];
  a[0] = 0, a[n + 1] = l;
  for (int i = 1; i < n + 1; ++i) {
    cin >> a[i];
  }
  sort(a, a + n + 2);
  int mx_d = 0;
  for (int i = 2; i < n + 1; ++i) {
    int d = a[i] - a[i - 1];
    mx_d = max(d, mx_d);
  }
  int mx_d1 = max((a[1] - a[0]), (a[n + 1] - a[n]));
  double ans = max(mx_d / 2.0, (double)mx_d1);
  cout << setprecision(10) << ans << '\n';
}

