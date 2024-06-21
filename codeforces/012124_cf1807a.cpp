#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "11\n" */
    /*     "1 2 3\n" */
    /*     "3 2 1\n" */
    /*     "2 9 -7\n" */
    /*     "3 4 7\n" */
    /*     "1 1 2\n" */
    /*     "1 1 0\n" */
    /*     "3 3 6\n" */
    /*     "9 9 18\n" */
    /*     "9 9 0\n" */
    /*     "8 9 -8\n" */
    /*     "1 9 10"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if(a<c)
            std::cout << "+\n";
        else
            std::cout << "-\n";
    }
}
