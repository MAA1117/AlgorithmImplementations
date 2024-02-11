#include <iostream>

int main()
{
    int t; 
    std::cin >> t;
    while(t--)
    {
        int h, m;
        std::cin >> h >> m;
        std::cout << 1440 - (60*h + m) << '\n';
    }
}
