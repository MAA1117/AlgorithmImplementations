// euler12
/*
What is the value of the first triangle number to have over five hundred
divisors?
*/

#include <iostream>
#include <vector>

int divisorCount(long long n) {
  if (n % 2 && n % 3)
    return -1;      // if it's not divisible by 2 or 3 dont bother
  int divCount = 2; // always divisible by 1 and itself (unless n = 1)
  for (long long i = 2; i <= n / 2; i++) {
    if (n % i == 0)
      divCount++;
  }
  return divCount;
}

// memoization method -- needs troubleshooting
/*
int divisorCount(long long n, std::vector<int>& divisorMemo)
{
    if (divisorMemo[n] != -1) return divisorMemo[n];
    int divCount = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divCount += (n / i == i) ? 1 : 2; // Add 2 for each pair of
divisors, 1 if i is the square root
        }
    }
    divisorMemo[n] = divCount;
    return divCount;
}
*/

long long triangleNumber(int n, std::vector<long long> &memo) {
  if (memo[n] != -1)
    return memo[n];
  memo[n] = triangleNumber(n - 1, memo) + n;
  return memo[n];
}

int main() {
  int target = 500;
  int divCount = 0;
  int n = 0;
  std::vector<long long> memo(1'000'000, -1);
  memo[0] = 0;

  for (int i = 3; i < 1'000'000; i++) {
    long long triNum = triangleNumber(i, memo);
    if (divisorCount(triNum) > target) {
      n = i;
      divCount = divisorCount(triNum);
      std::cout << "First triangle n with > " << target
                << " divisors: " << triNum << '\n';
      break;
    }
  }
  std::cout << "(" << divCount << " divisors, triNum # " << n << ")"
            << std::endl;
}

/*
NOTES
*****
1 -> 1
2 -> 1 + 2 = 3 -> divisors: 1, 3 (1)
3 -> 1 + 2 + 3 = 6 -> divisors: 1, 2, 3, 6 (4)
4 -> 1 + 2 + 3 + 4 = 10 -> divisors: 1, 2, 5, 10 (4)
etc.

[Out]
First triangle n with > 500 divisors: 76576500
(576 divisors, triNum # 12375)
[964180386us (964180ms)]


*/
