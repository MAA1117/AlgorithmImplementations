// https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO                                                                 \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr)

int main() {
  SET_IO;
  u8 n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2) {
      n = n * 3 + 1;
    } else {
      n /= 2;
    }
    cout << n << " ";
  }
  cout << endl;
}
