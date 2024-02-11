//cf1878c
#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        long long n, k, x;
        std::cin >> n >> k >> x;

        if (k * (k + 1) <= 2 * x && n * (n + 1) - (n - k) * (n - k + 1) >= 2 * x)
        {
            std::cout << "YES\n";
        }
        else std::cout << "NO\n";
    }
}