//euler2
/*
sum of even fib nums <= 4E6
*/
#include <iostream>
#include <vector>
#include "hfiles\Timer.h"

int fibonacci(int n, std::vector<int> &memo)
{
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Check if already calculated
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo); // Store the result in the memo array
    return memo[n];
}

int main()
{
    //std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
    Timer timer;

    long long sum = 0;
    int n = 33; // 33 is the highest n (3,524,578) that will give a fibonacci number <= 4E6

    // Initialize the memoization array with -1 (indicating not calculated)
    std::vector<int> memo(n + 1, -1);

    while (n > 0)
    {
        long long a = fibonacci(n, memo);
        if (a % 2 == 0) sum += a;
        n--;
        std::cout << n + 1 << " " << a << std::endl;
    }

    std::cout << "sum: " << sum << std::endl;
}

/*
#python
#implement memoization

def fib(n, memo):
    if n <= 1:
        return n
    if memo[n] != -1:
        return memo[n]
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo)
    return memo[n]


sum = 0
n = 33
while n > 0:
    a = fib(n)
    if a % 2 == 0:
        sum += a
    n -= 1

print(sum)

*/
