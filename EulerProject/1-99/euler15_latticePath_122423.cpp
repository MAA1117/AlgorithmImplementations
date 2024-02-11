//euler14
/*
Find the n of routes through a 20 x 20 grid
*/

#include <iostream>
#include "hfiles/Timer.h"

long long binomialCoefficient(int n, int k)
{
    if (k > n - k) k = n - k;
    long long result = 1;
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

long long calculateRoutes(int gridSize)
{
    return binomialCoefficient(2 * gridSize, gridSize);
}

int main()
{
    Timer tr;
    int gridSize = 20;
    std::cout << "Number of routes through a " << gridSize << "x" << gridSize 
              << " grid: " << calculateRoutes(gridSize) << std::endl;
}

/*
NOTES
*****
unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

C(2n, n) = C(2n, 2n - n) 
-> C(n, k) = n! / (k! * (n - k)!)


*/