//cf996a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int billsCount = 0;
    
    int hundreds = 0;
    if (n >= 100)
    {
        hundreds = n / 100;
        billsCount += hundreds;
        n -= hundreds * 100;
    }

    int twenties = 0;
    if (n >= 20)
    {
        twenties = n / 20;
        billsCount += twenties;
        n -= twenties * 20;
    }

    int tens = 0;
    if (n >= 10)
    {
        tens = n / 10;
        billsCount += tens;
        n -= tens * 10;
    }

    int fives = 0;
    if (n >= 5)
    {
        fives = n / 5;
        billsCount += fives;
        n -= fives * 5;
    }

    billsCount += n;
    std::cout << billsCount;
}

/*
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int bills[] = {100, 20, 10, 5, 1};  // Bill denominations
    int billsCount = 0;

    for (int bill : bills)
    {
        billsCount += n / bill;
        n %= bill;
    }

    std::cout << billsCount << std::endl;
}

#python

n = int(input())
bills = [100, 20, 10, 5, 1]
billsCount = 0

for bill in bills:
    billsCount += n // bill
    n %= bill

print(billsCount)

*/