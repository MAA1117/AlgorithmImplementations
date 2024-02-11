// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

// binomial coefficient formula
// (n choose k) = n! / (k! * (n - k)!)
i8 bc(i8 n, i8 k) {
  //  if (k > n - k) {
  //    k = n - k;
  //  }
  i8 result = 1;
  for (i8 i = 0; i < k; ++i) {
    result *= n - i;
    result /= i + 1;
  }
  return result;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  //  FREOPEN_IN; // n = 10'000

  i8 n;
  cin >> n;
  i8 x = 0;
  cout << 0 << '\n';
  for (i8 i = 2; i < n + 1; i++) {
    i8 ans = bc(i * i, 2);
    x += i - 2;
    ans -= 8 * x;
    cout << ans << '\n';
  }
}
