// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  //  FREOPEN_IN;
  int n;
  cin >> n;
  int prev;
  cin >> prev;
  n--;
  i8 count = 0;
  while (n--) {
    int x;
    cin >> x;
    count += max(prev - x, 0);
    prev = max(x, prev);
  }
  cout << count << endl;
}
