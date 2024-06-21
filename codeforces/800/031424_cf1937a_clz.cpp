// https://codeforces.com/problemset/problem/1937/A

#include <cstdio>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    unsigned int n;
    scanf("%d", &n);
    int x = __builtin_clz(n);
    printf("%d\n", 1<<(31-x));
  }
}
