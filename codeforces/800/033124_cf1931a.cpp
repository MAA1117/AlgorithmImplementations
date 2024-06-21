// https://codeforces.com/problemset/problem/1931/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int eval(vector<int> &v) {
  int score = accumulate(v.begin(), v.end(), 0);
  return score;
}

void solve() {
  int n;
  cin >> n;

  vector<int> v = {1, 1, 1};
  int score = eval(v);
  while (score != n) {
    if(v[2] < 26) {
      ++v[2];
    } else if(v[1] < 26) {
      ++v[1];
    } else {
      ++v[0];
    }
    score = eval(v);
  }
  for(int &nx : v) {
    nx += 'a' - 1;
    cout << (char)nx;
  }
  cout << '\n';
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
