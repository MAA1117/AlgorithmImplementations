// https://codeforces.com/problemset/problem/1772/A

#include <bits/stdc++.h>
using namespace std;

#define REVERSE [](int a, int b) { return a > b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO                                                                 \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr)
typedef long long ll;
typedef uint64_t u64;

void solve() {
  string s;
  cin >> s;
  int ans = 0;
  int prev_loc = 0;
  for (char c : s) {
    int loc = int(c - 'a');
    int dist = abs(loc - prev_loc);
    if (dist > 13) {
      ans += abs(dist - 26);
    } else {
      ans += dist;
    }
    prev_loc = loc;
  }
  cout << ans << '\n';
}

int main() {
  SET_IO;
  solve();
}
