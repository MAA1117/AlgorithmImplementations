#include <stdio.h>
#include <string.h>

void compute_prefix_function(const char *s, int *pi) {
  int n = strlen(s);
  pi[0] = 0;
  int k = 0;
  for (int q = 1; q < n; q++) {
    while (k > 0 && s[k] != s[q]) {
      k = pi[k - 1];
    }
    if (s[k] == s[q]) {
      k++;
    }
    pi[q] = k;
  }
}

void find_borders(const char *s) {
  int n = strlen(s);
  int pi[n];
  compute_prefix_function(s, pi);

  int k = pi[n - 1];
  int borders[n];
  int count = 0;
  while (k > 0) {
    borders[count++] = k;
    k = pi[k - 1];
  }

  for (int i = count - 1; i >= 0; i--) {
    printf("%d ", borders[i]);
  }
  printf("\n");
}

int main() {
  char s[1000001];
  scanf("%s", s);
  find_borders(s);
  return 0;
}

