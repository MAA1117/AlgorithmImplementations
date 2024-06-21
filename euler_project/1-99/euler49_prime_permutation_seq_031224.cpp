#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

bool is_perm(int a, int b, int c) {
  string s1, s2, s3;
  s1 = to_string(a);
  s2 = to_string(b);
  s3 = to_string(c);
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  sort(s3.begin(), s3.end());
  if (s1 == s2 && s2 == s3) {
    return true;
  }
  return false;
}

int main() {
  vector<int> primes;
  for (int i = 1001; i <= 9999; i += 2) {
    if (is_prime(i)) primes.push_back(i);
  }
  int n = primes.size();
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j > i; --j) {
      int m = (primes[j] - primes[i]) / 2;
      if (find(primes.begin(), primes.end(), primes[i] + m) != primes.end() &&
          is_perm(primes[i], primes[i] + m, primes[j])) {
        cout << primes[i] << " " << primes[i] + m << " " << primes[j] << endl;
      }
    }
  }
}
