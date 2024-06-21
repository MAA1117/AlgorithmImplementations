// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

const lf EPS = 1e-7;

int main() {
  SET_IO();
  int n;
  cin >> n;
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < n; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    x += a;
    y += b;
    z += c;
  }
  if (x == 0 && y == 0 && z == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
}
