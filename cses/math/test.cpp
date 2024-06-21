#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

using lf = long double;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> r(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &r[i]);
  }

  lf expected_inversions = 0.0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      lf probability = 0.0;
      for (int x = 1; x <= r[i]; ++x) {
        for (int y = 1; y <= r[j]; ++y) {
          if (x > y) {
            probability += (lf)1.0;
          }
        }
      }
      probability /= (r[i] * r[j]);
      expected_inversions += probability;
    }
  }

  printf("%.6lf\n", (double)expected_inversions);
}
