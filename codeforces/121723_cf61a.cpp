//cf61b
#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    
    int length = a.length();

    for (int i=0; i<length; i++)
    {
        if (a[i] != b[i])
        {
            std::cout << 1;
        }
        else
        {
            std::cout << 0;
        }
    }
}