//cf467a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int p, q;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> p >> q;
        if (p < q - 1)
        {
            count++;
        }
    }
    std::cout << count;
}