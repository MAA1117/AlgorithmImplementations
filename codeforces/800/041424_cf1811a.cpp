// https://codeforces.com/problemset/problem/1811/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; char d; cin >> n >> d;
  string num; cin >> num;
  bool inserted = false;
  for (int i=0; i<n; ++i) {
    if (num[i] < d) {
      num.insert(num.begin()+i, d);
      inserted = true;
      break;
    }
  }
  if (!inserted) {
    num.insert(num.end(), d);
  }
  cout << num << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
