// https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  //  FREOPEN_IN;
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  cout << n / 2 + n % 2 << " " << n << " ";
  for (int i = 2; i < n; i++) {
    if (i % 2 == 0) {
      cout << i / 2 << " ";
    } else {
      cout << n - i / 2 << " ";
    }
  }
  cout << endl;
}
