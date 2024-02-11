//cf581a
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int count1 = 0;
    int count2 = 0;
    
    while (a > 0 && b > 0)
    {
        a--;
        b--;
        count1++;
    }

    a += b;
    while (a > 1)
    {
        a -= 2;
        count2++;
    }

    std::cout << count1 << " " << count2 << '\n';
}