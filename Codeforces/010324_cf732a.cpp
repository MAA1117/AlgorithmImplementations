//cf732a
#include <iostream>

int main()
{
    int k, r;
    std::cin >> k >> r;
    int shovels = 1;
    for (int i = 1; i <= 10; i++)
    {
        if ((k * i) % 10 == 0)
        {
            shovels = i;
            break;
        }
        else if ((k * i) % 10 == r)
        {
            shovels = i;
            break;
        }
    }
    std::cout << shovels << std::endl;
}