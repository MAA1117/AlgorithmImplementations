//cf1335a

#include <iostream>

int waysToDistribute(int n)
{
    if (n % 2)
        return n / 2;
    else
        return (n / 2) - 1;
}


int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        std::cout << waysToDistribute(n) << std::endl;
    }
}

/*
a + b = n
a > b
*/