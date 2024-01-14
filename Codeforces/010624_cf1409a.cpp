// cf1409a
#include <iostream>
#include <cstdlib>

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        int a, b; std::cin >> a >> b;
        int diff = std::abs(a - b);
        int moves = diff / 10;
        if (diff % 10)
            moves++;
        std::cout << moves << '\n';
    }
}
