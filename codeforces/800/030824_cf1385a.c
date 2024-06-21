// https://codeforces.com/problemset/problem/1385/A

#include "stdio.h"
#include "stdlib.h"

int cmp (const void* elem1, const void* elem2) {
    int a = *((int*)elem1);
    int b = *((int*)elem2);
    if (a > b) return  1;
    if (a < b) return -1;
    return 0;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    qsort(a, sizeof(a) / sizeof(*a), sizeof(*a), cmp);
    if (a[1] != a[2]) {
      puts("NO");
    } else {
      puts("YES");
      printf("%d %d %d\n", a[0], a[0], a[2]);
    }
  }
}
