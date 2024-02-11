// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  FREOPEN_IN;

  int n;
  cin >> n;
  u8 sum = 0;
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  cout << n * (n + 1) / 2 - sum << endl;
}
