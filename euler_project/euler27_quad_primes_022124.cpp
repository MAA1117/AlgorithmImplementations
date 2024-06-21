// https://projecteuler.net/problem=27

// Find the product of the coefficients a and b for the quadratic expression
// that produces the maximum number of primes for consecutive values of n,
// starting with n=0.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

#if 0
template <int N = 1'000'000, bool compute_primes = false>
struct fast_sieve {
  std::bitset<N / 3 + 1> sieve;
  vector<int> primes;
  inline bool is_prime(int n) {  // Start at 2. Doesnt handle 1.
    return n == 2 || n == 3 || ((n & 1) && (n % 3) && (sieve[n / 3]));
  }
  void fill_sieve() {
    sieve.set();
    for (int p = 5, d = 4, i = 1, sqn = int(std::sqrt(N)); p <= sqn;
         p += d = 6 - d, i++) {
      if (!sieve[i]) continue;
      for (int q = p * p / 3, r = d * p / 3 + (d * p % 3 == 2), s = 2 * p,
               qe = (int)sieve.size();
           q < qe; q += r = s - r)
        sieve[q] = 0;
    }
  }
  vector<int> get_primes() {
    vector<int> ret{2, 3};
    for (int p = 5, d = 4, i = 1; p <= N; p += d = 6 - d, i++)
      if (sieve[i]) ret.push_back(p);
    while (!ret.empty() && ret.back() > N) ret.pop_back();
    return ret;
  }
  fast_sieve() {
    fill_sieve();
    if (compute_primes) primes = get_primes();
  }
};
#endif

// couldnt figure out how to implement the fast_sieve

// basic is_prime() is good enough to provide instant correct answer
bool is_prime(int n) {
  if (n == 2 || n == 3) return true;
  if (n < 5 || n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

int test(int a, int b) {
  int count = 0;
  for (int n = 0; n < 1000; ++n) {
    if (!is_prime(n * n + a * n + b)) {
      return n;
    }
  }
  return 1000;  // result must be <= b (?)
}

int main() {
  int h = 0;
  pair<int, int> p = {0, 0};
  for (int a = -1000; a < 1000; ++a) {
    for (int b = -1000; b < 1000; ++b) {
      if (!is_prime(b)) continue;
      int x = test(a, b);
      h = max(x, h);
      if (x == h) {
        p = {a, b};
      }
    }
  }
  cout << h << endl;
  cout << p.first << " " << p.second << " " << p.first * p.second << endl;
  // 71
  // -61 971 -59231
}
