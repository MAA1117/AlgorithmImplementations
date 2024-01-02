//euler3
/*
find the largest prime factor of 600,851,475,143
*/

#include <iostream>
#include <cmath>
#include "hfiles\Timer.h"

int main()
{
    Timer tr;
    long long n = 600851475143LL;
    long long largestFactor = 0;
    long long divisor = 2;

    while (n != 1)
    {
        while (n % divisor == 0)
        {
            largestFactor = divisor;
            n /= divisor;
        }
        divisor++;

        // Only need to check up to the square root of the current n
        if (divisor * divisor > n && n > 1)
        {
            largestFactor = n;
            break;
        }
    }

    std::cout << "Largest prime factor: " << largestFactor << std::endl;
}



/*
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


int main()
{
    //std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);

    Timer tr;

    long long n = 600'851'475'143;
    long long rootN = sqrt(n); //775,146
    int rangeMax = rootN;

    while (rangeMax--)
    {
        if (isPrime(rangeMax))
        {
            if (n % rangeMax == 0) break;
        }
    }

    std::cout << rangeMax << std::endl;
}
*/