//cf510a
#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << '#';
            }
            std::cout << '\n';
        }
        else if (i % 4 == 1)
        {
            for (int j = 0; j < m - 1; j++)
            {
                std::cout << '.';
            }
            std::cout << '#' << '\n';
        }
        else
        {
            std::cout << '#';
            for (int j = 0; j < m - 1; j++)
            {
                std::cout << '.';
            }
            std::cout << '\n';
        }
    }
}