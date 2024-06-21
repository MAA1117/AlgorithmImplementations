// https://cses.fi/problemset/task/1646

#include <stdio.h>
using ll = long long;

const int MXN = 2E5;
ll psums[MXN], x[MXN], ans[MXN];

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &x[i]);
  }
  for (int i = 0; i < n + 1; ++i) {
    psums[i] = psums[i - 1] + x[i - 1];
  }
  for (int i = 0; i < q; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    ans[i] = psums[b] - psums[a - 1];
  }
  for (int i = 0; i < q; ++i) {
    printf("%lld\n", ans[i]);
  }
}
