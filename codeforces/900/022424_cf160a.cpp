// https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  SET_IO();
  int n;
  cin >> n;
  int tot = 0;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
    tot += x;
  }
  sort(a.begin(), a.end(), [](int a, int b) { return a > b; });
  int cnt = 0;
  int sm = 0;
  for (int i = 0; i < n; ++i) {
    sm += a[i];
    ++cnt;
    if (sm > tot / 2) {
      break;
    }
  }
  cout << cnt << '\n';
}
