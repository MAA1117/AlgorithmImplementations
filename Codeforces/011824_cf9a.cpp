#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
    /* std::string INPUT = */ 
    /*     "2 1"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */


    int y, w;
    std::cin >> y >> w;
    int bigger = std::max(y, w);

    if (bigger == 1)
    {
        std::cout << 1 << "/" << 1;
    }
    else if (bigger == 2)
    {
        std::cout << 5 << "/" << 6;
    }
    else if (bigger == 3)
    {
        std::cout << 2 << "/" << 3;
    }
    else if (bigger == 4)
    {
        std::cout << 1 << "/" << 2;
    }
    else if (bigger == 5)
    {
        std::cout << 1 << "/" << 3;
    }
    else
    {
        std::cout << 1 << "/" << 6;
    }
}
