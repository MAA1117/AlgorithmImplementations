// euler50
/*
Which prime below 1e6 can be written as the sum of the most consecutive primes.
*/
#include <iostream>
#include <vector>

std::vector<int> sieveOfEratosthenes(int limit)
{
    std::vector<bool> sieve(limit, true);
    std::vector<int> primes;

    for (int p = 2; p * p <= limit; p++)
    {
        if (sieve[p])
        {
            for (int i = p * p; i < limit; i += p)
                sieve[i] = false;
        }
    }

    for (int p = 2; p < limit; p++)
    {
        if (sieve[p])
            primes.push_back(p);
    }

    return primes;
}

bool isPrime(int number, const std::vector<int> &primes)
{
    for (int prime : primes)
    {
        if (prime >= number)
            return true;
        if (number % prime == 0)
            return false;
    }
    return true;
}

int main()
{
    const int limit = 1000000;
    std::vector<int> primes = sieveOfEratosthenes(limit);

    int maxLength = 0;
    int maxPrime = 0;

    for (size_t i = 0; i < primes.size(); ++i)
    {
        int sum = 0;
        for (size_t j = i; j < primes.size(); ++j)
        {
            sum += primes[j];
            if (sum >= limit)
                break;

            if (j - i > maxLength && isPrime(sum, primes))
            {
                maxLength = j - i;
                maxPrime = sum;
            }
        }
    }

    std::cout << "Prime: " << maxPrime << '\n';
    std::cout << "Length: " << maxLength + 1 << std::endl;
}

/*
NOTES
*****
Prime: 997651
Length: 543
*/