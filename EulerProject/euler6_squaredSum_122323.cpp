//euler6
/*
find the difference between the sum of the squares of the first 100 natural numbers
and the square of the sum
*/

#include <iostream>
#include "hfiles\Timer.h"

long long sumSquares(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    return sum;
}

long long squaredSum(int n)
{
    long long sum1 = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 += i;
    }
    long long sum2 = sum1 * sum1;
    return sum2; 
}

int main()
{
    Timer tr;
    int n = 100;
    long long difference = squaredSum(n) - sumSquares(n);
    std::cout << difference << std::endl;
}
/*
OPTIMIZED SOLUTION
******************
#include <iostream>
#include "hfiles/Timer.h"

long long sumSquares(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

long long squaredSum(int n)
{
    long long sum = n * (n + 1) / 2;
    return sum * sum;
}

int main()
{
    Timer tr;
    int n = 100;
    long long difference = squaredSum(n) - sumSquares(n);
    std::cout << difference << std::endl;
}
*/


/*
NOTES
*****
[Out] 25164150
222us (0.222ms)

*/