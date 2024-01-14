//euler7
/*
find the 10,001st prime number
*/

#include <iostream>
#include <cmath>
#include "hfiles\Timer.h"

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int nthPrime(int n)
{
    int rangeMax = int(n * log(n) + n * log(log(n)));
    int primes = 0;
    for (int i = 0; i < rangeMax; i++)
    {
        if (isPrime(i)) primes++;
        if (primes == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    Timer tr;
    int target = 10'001;
    int result = nthPrime(target);
    std::cout << "P_" << target << " : " << result << std::endl;
}

/*
NOTES:
******
[Out] P_10001 : 104743
4037us (4.037ms)

*/