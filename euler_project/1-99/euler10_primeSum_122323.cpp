//euler10
/*
Find the sum of all the primes below two million.
*/

#include <iostream>
#include "hfiles\isPrime.h"
#include "funcs\isPrime.cpp"
#include "hfiles\Timer.h"

int main()
{
    Timer tr;
    long long primeSum = 2; // add 2 manually so the loop can check only odds
    int rangeMax = 2'000'000;
    for (int i = 3; i < rangeMax; i+=2)
    {
        if (isPrime(i)) primeSum += i;
    }
    std::cout << primeSum;
}
