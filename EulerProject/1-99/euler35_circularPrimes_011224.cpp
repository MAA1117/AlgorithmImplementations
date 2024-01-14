// euler 35
/*
 * Find the number of circular primes < 1e6.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> sieveOfEratosthenes(int maxNumber)
{
    std::vector<bool> prime(maxNumber + 1, true);
    std::vector<int> primes;
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= maxNumber; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= maxNumber; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= maxNumber; p++)
    {
        if (prime[p])
            primes.push_back(p);
    }
    return primes;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int rotate(int num)
{
    std::string numStr = std::to_string(num);
    char firstDigit = numStr[0];
    numStr.erase(numStr.begin());
    numStr.push_back(firstDigit);
    return std::stoi(numStr);
}


int main()
{
    std::vector<int> primes = sieveOfEratosthenes((int)1e6);
    int circularPrimesCount = 0;

    for (int prime : primes)
    {
        std::string numStr = std::to_string(prime);
        bool isCircular = true;

        for (size_t i = 0; i < numStr.length(); ++i)
        {
            std::rotate(numStr.begin(), numStr.begin() + 1, numStr.end());
            int rotatedNum = std::stoi(numStr);

            if (!isPrime(rotatedNum))
            {
                isCircular = false;
                break;
            }
        }

        if (isCircular)
        {
            circularPrimesCount++;
        }
    }

    std::cout << circularPrimesCount << '\n';
}
