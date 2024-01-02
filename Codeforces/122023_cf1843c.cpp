//cf1843c
#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for (int i=0; i<t; i++)
    {
        long long n;
        std::cin >> n;

        long long vertexSum = n;

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                vertexSum += n / 2;
                n = n / 2;
            }
            else
            {
                vertexSum += (n - 1) / 2;
                n = (n - 1) / 2;
            }
        }

        std::cout << vertexSum << std::endl;
    }
}

/*
errors encountered:

1. used int variables
    -> long long

2. output error caused by std::cout << vertexSum;
    -> std::cout << vertexSum << std::endl;

*/