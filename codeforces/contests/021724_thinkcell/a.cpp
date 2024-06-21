// accepted

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  for (int &it : a) {
    cin >> it;
  }
  int score = 0;
  sort(a.begin(), a.end());
  for (int i = 0; i < 2 * n; i += 2) {
    score += a[i];
  }
  cout << score << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
