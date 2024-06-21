// https://codeforces.com/problemset/problem/822/A

#include <algorithm>
#include <cstdio>
using namespace std;

int f(int n) {
  int ans = 1;
  for (int i = 2; i <= n; ++i) {
    ans *= i;
  }
  return ans;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", f(min(a, b)));
}
