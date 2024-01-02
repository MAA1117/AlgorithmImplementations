//cf787a
#include <iostream>
#include <algorithm>

int gcd(int x, int y)
{
    return y == 0 ? x : gcd(y, x % y);
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (d >= b && (d - b) % a == 0)
    {
        std::cout << d << std::endl;
        return 0;
    }

    int common_gcd = gcd(a, c);

    if ((b - d) % common_gcd == 0)
    {
        // Using the extended Euclidean algorithm to find k such that b + a*k = d (mod c)
        int k = 0;
        while (true)
        {
            int rick_scream = b + a * k;
            if (rick_scream >= d && (rick_scream - d) % c == 0)
            {
                std::cout << rick_scream << std::endl;
                return 0;
            }
            k++;
        }
    }
    else
    {
        std::cout << -1 << std::endl;
    }
}
