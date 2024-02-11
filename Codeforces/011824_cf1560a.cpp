#include <iostream>
#include <string>
#include <sstream>

int nthNum (int n)
{
    int count = 0;
    int i = 0;
    while (count < n)
    {
        i++;
        if (i % 3 && i % 10 != 3)
        {
            count++;
        }
    }
    return i;
}


int main()
{
    /* std::string INPUT = */ 
    /*     "10\n" */
    /*     "1\n 2\n 3\n 4\n 5\n 6\n 7\n 8\n 9\n 1000"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while(t--)
    {
        int k;
        std::cin >> k;
        std::cout << nthNum(k) << '\n';
    }
}
