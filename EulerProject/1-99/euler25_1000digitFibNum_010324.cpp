// euler 25
/*
Find the index of the first fibonacci number with >= 1000 digits.
*/

#include <iostream>
#include <vector>
#include <string>
#include <gmpxx.h>
#include "hfiles/timer.h"

mpz_class fibonacci(int n, std::vector<mpz_class> &memo)
{
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main()
{
    Timer tr;
    int n = 5000;
    std::string fibNumStr;
    std::vector<mpz_class> memo(n + 1, -1);

    for (int i = 1; i < n; i++)
    {
        mpz_class num = fibonacci(i, memo);
        fibNumStr = num.get_str();
        if (fibNumStr.length() >= 1000)
        {
            std::cout << "Index: " << i << std::endl;
            std::cout << "Length: " << fibNumStr.length() << std::endl;
            break;
        }
    }
}

/*
NOTES
*****
Index: 4782
Length: 1000
[17796us (17.796ms)]
*/