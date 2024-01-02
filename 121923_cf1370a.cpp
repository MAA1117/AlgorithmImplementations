//cf1370a
#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        int GCD;

        if (n % 2 == 0)
        {
            GCD = n / 2;
        }
        else
        {
            GCD = (n - 1) / 2;
        }

        std::cout << GCD << std::endl;
    }
}