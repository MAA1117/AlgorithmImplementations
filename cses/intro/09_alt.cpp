// Problem: https://cses.fi/problemset/task/1092

/*
This solution generates correct answers for small inputs
but overflows.

Apparently accumulating over binomial coefficients n, [0, n]
is equivalent to 2^n.
*/

#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

const long long MOD = (long long)1e9 + 7;

long long exponentiate(long long a, long long b) {
  for (int i = 1; i <= b; i++) {
    a = (a % MOD) * (b % MOD) % MOD;
  }
  return a;
}

long long euler_div(long long a, long long b) {
  long long x = exponentiate(b % MOD, MOD - 2) % MOD;
  return ((a % MOD) * (x % MOD)) % MOD;
}

long long bc(long long n, long long k) {
  if (k > n - k) {
    k = n - k;
  }
  long long result = 1;
  for (int i = 0; i < k; ++i) {
    result = (result % MOD) * ((n - i) % MOD) % MOD;
    result /= i + 1;
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  long long sum = 0;
  for (long long i = 0; i <= n; i++) {
    sum = (sum + bc(n, i)) % MOD;
  }
  cout << sum << endl;
}
