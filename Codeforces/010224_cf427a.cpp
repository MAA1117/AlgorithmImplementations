//cf427a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int police = 0;
    int crimes = 0;

    for (int i = 0; i < n; i++)
    {
        int recruits;
        std::cin >> recruits;

        if (recruits > 0)
            police += recruits;
        else if (recruits == -1 && police > 0)
            police--;
        else
            crimes++;
    }
    std::cout << crimes << std::endl;
}