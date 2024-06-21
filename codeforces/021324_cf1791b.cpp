#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    char buf[n + 1];
    scanf("%s", buf);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      if (buf[i] == 'U') {
        y++;
      } else if (buf[i] == 'D') {
        y--;
      } else if (buf[i] == 'R') {
        x++;
      } else if (buf[i] == 'L') {
        x--;
      }
      if (x == 1 && y == 1) {
        puts("YES");
        goto jump;
      }
    }
    puts("NO");
  jump:
    continue;
  }
}
