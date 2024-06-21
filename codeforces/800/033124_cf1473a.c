#include "stdio.h"
#include "stdlib.h"

int cmp (const void* elem1, const void* elem2) {
    int a = *((int*)elem1);
    int b = *((int*)elem2);
    if (a > b) return  1;
    if (a < b) return -1;
    return 0;
}

void solve() {
  int n, d;
  scanf("%d%d", &n, &d);
  int a[n];
  for(int i=0; i<n; ++i) {
    scanf("%d", &a[i]);
  }
  qsort(a, sizeof(a)/sizeof(*a), sizeof(*a), cmp);
  if(a[n-1] <= d || a[0] + a[1] <= d) {
    puts("YES");
  } else {
    puts("NO");
  }
}

int main() {
  int t; 
  scanf("%d", &t);
  while(t--) {
    solve();
  }
}
