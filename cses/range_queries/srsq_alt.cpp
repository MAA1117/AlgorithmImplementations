// https://cses.fi/problemset/task/1646

#include <stdio.h>
using ll = long long;

const int MXN = 2E5;
ll x[MXN+1], ans[MXN];

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  for (int i = 1; i <= n; ++i) {
    scanf("%lld", &x[i]);
    x[i] += x[i-1];
  }
  for (int i = 0; i < q; ++i) {
    int a, b;
    scanf("%d %d", &a, &b);
    ans[i] = x[b] - x[a - 1];
  }
  for (int i = 0; i < q; ++i) {
    printf("%lld\n", ans[i]);
  }
}
