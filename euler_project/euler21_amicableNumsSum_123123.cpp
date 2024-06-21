//euler21
/*
Let d(n) be defined as the sum of proper divisors of n (numbers less than
n which divide evenly into n).

If d(a) = b and d(b) = a, where a / b, then a and b are an amicable pair
and each of a and b are called amicable numbers.

Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>
#include <vector>
#include <numeric>

int sumOfDivisors(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    const int rangeMax = 10'000;
    int totalSum = 0;

    for (int a = 1; a < rangeMax; a++)
    {
        int b = sumOfDivisors(a);

        if (a != b && sumOfDivisors(b) == a)
            totalSum += a;
    }

    std::cout << "Sum: " << totalSum << std::endl;
}

/*
NOTES
*****

The proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110;
therefore d(220) = 284.

The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
*/