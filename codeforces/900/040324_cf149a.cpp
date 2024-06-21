// https://codeforces.com/problemset/problem/149/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int k;
  cin >> k;
  deque<int> a(12);
  for (int i = 0; i < 12; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  int ans = 0, growth = 0;
  while (growth < k) {
    if(a.size() == 0) {
      cout << "-1\n";
      return 0;
    }
    growth += a[0];
    ++ans;
    a.pop_front();
  }
  cout << ans << '\n';
}
