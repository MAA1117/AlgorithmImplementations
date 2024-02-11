#include <iostream>

int main()
{
    int t; std::cin >> t;

    while(t--)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        int count = 0;
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;

        std::cout << count << '\n';
    }
}
