// https://cses.fi/problemset/task/1728
// 030524
#include <bits/stdc++.h>
using namespace std;
typedef long double lf;  // Cumulative error from intermediate calculations
                         // with double causes wrong answer in one test case.
                         // Long double is required for sufficient precision.
int main() {
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  for (int &nx : v) {
    scanf("%d", &nx);
  }
  lf tot = 0.0;
  for (int a = 0; a < n; ++a) {
    for (int b = 0; b < n; ++b) {
      if (a >= b) continue;
      // find (number of combos where xa > xb) / (total combos)
      int combos;
      int xa = v[a], xb = v[b];
      if (xa <= xb) {
        combos = (xa - 1) * xa / 2;
      } else {
        combos = (xa * xb) - (xb * (xb + 1) / 2);
      }
      tot += (lf)combos / (lf)(xa * xb);
    }
  }
  printf("%.6lf\n", (double)tot);  // iostream apparently does not tie decimal
                                   // floats to even, but stdio.h does.
}
