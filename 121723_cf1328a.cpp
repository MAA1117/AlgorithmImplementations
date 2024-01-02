#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int a, b, mod;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;
        mod = a % b;
        if (mod == 0)
        {
            std::cout << 0 << std::endl;
        }
        else
        {
            std::cout << b - mod << std::endl;
        }    
    }
}