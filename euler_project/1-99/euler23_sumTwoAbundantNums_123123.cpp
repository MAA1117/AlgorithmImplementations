//euler23
/*
Find the sum of all natural numbers which can't be written
as the sum of two abundant numbers.
*/

#include <iostream>
#include <vector>
#include <algorithm>

long long factorSum(int n)
{
    long long sum = 1;
    for (int divisor = 2; divisor * divisor <= n; ++divisor)
    {
        if (n % divisor == 0)
        {
            sum += divisor;
            if (divisor != n / divisor)
                sum += n / divisor;
        }
    }
    return sum;
}

bool isAbundant(int n)
{
    return factorSum(n) > n;
}

int main()
{
    const int rangeMax = 28'123;
    std::vector<int> abundantNumbers;
    std::vector<bool> canBeExpressedAsAbundantSum(rangeMax + 1, false);
    long long sum = 0;

    for (int i = 12; i <= rangeMax; i++)
    {
        if (isAbundant(i))
            abundantNumbers.push_back(i);
    }

    for (size_t i = 0; i < abundantNumbers.size(); i++)
    {
        for (size_t j = i; j < abundantNumbers.size(); j++)
        {
            int abundantSum = abundantNumbers[i] + abundantNumbers[j];
            if (abundantSum <= rangeMax)
                canBeExpressedAsAbundantSum[abundantSum] = true;
        }
    }

    for (int i = 1; i <= rangeMax; i++)
    {
        if (!canBeExpressedAsAbundantSum[i])
            sum += i;
    }

    std::cout << "Sum: " << sum << std::endl;
}
