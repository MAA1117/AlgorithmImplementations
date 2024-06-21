// https://cses.fi/problemset/task/1081

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
#define REVERSE [](int a, int b) { return a > b; }

const int MAX = 1e6;

int main() {
  SET_IO();
  int n;
  cin >> n;
  vector<int> v(MAX + 1, 0);
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    ++v[a];
  }
  for (int i = MAX; i > 0; --i) {
    int x = 0;
    for (int j = i; j <= MAX; j += i) {
      x += v[j];
    }
    if (x > 1) {
      cout << i << '\n';
      return 0;
    }
  }
}
