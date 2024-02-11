//cf1352a
#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> roundify(int n)
{
    std::vector<int> roundRepresentation;
    int N = n;
    int operations = 1;

    int thousands = 0;
    if (N >= 1000)
    {
        N %= 1000;
        thousands = n - N;
        if (N != 0)
            operations++;
        else
        {
            roundRepresentation.push_back(operations);
            roundRepresentation.push_back(n);
            return roundRepresentation;
        }
        n -= thousands;
    }

    int hundreds = 0;
    if (N >= 100)
    {
        N %= 100;
        hundreds = n - N;
        n -= hundreds;
        if (N != 0)
            operations++;
    }

    int tens = 0;
    if (N >= 10)
    {
        N %= 10;
        tens = n - N;
        if (N != 0)
            operations++;
    }

    int ones = N;
    roundRepresentation.push_back(operations);

    if (thousands != 0)
        roundRepresentation.push_back(thousands);
    if (hundreds != 0)
        roundRepresentation.push_back(hundreds);
    if (tens !=0)
        roundRepresentation.push_back(tens);
    if (ones != 0)
        roundRepresentation.push_back(ones);

    return roundRepresentation;
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        std::vector<int> result = roundify(n);
        for (int value : result)
        {
            std::cout << value << " ";
        }
        std::cout << '\n';
    }
}