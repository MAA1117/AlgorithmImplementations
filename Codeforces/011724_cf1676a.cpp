#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "5\n" */
    /*     "213132\n" */
    /*     "973894\n" */
    /*     "045207\n" */
    /*     "000000\n" */
    /*     "055776"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t; std::cin >> t;

    while(t--)
    {
        std::string s;
        std::cin >> s;

        int size = s.size() - 1;

        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int x = s[size] - '0';
        int y = s[size-1] - '0';
        int z = s[size-2] - '0';

        int sum1 = a+b+c;
        int sum2 = x+y+z;

        if(sum1==sum2)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';

    }
}
