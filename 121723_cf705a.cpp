//cf705a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            std::cout << "I hate";
        }
        else  
        {
            std::cout << "I love";
        }

        if (i == n)
        {
            std::cout << " it";
        }
        else
        {
            std::cout << " that ";
        }
    }
}