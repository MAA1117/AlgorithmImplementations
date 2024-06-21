#include <stdio.h>
typedef long long ll;

int main() {
  ll n, m, a;
  scanf("%lld %lld %lld", &n, &m, &a);
  ll ans = ((m + a - 1) / a) * ((n + a - 1) / a);
  printf("%lld\n", ans);
}
