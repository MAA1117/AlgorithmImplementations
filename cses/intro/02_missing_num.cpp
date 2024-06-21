// https://cses.fi/problemset/task/1083

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
  //  FREOPEN_IN;

  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end() - 1);
  for (int i = 0; i < n; i++) {
    if (a[i] != i + 1) {
      cout << i + 1 << " ";
      break;
    }
  }
  cout << endl;
}
