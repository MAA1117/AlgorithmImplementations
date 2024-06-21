#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "4\n 1\n 2\n 3\n 4"; */

    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    
    while(t--)
    {
        int n;
        std::cin >> n;

        if (n % 2)
            std::cout << n / 2 + 1 << '\n';
        else
            std::cout << n / 2 << '\n';
    }
}

