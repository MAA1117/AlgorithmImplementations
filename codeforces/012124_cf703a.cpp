#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "3\n" */
    /*     "3 5\n" */
    /*     "2 1\n" */
    /*     "4 2"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    int chrisCount = 0;
    int mishkaCount = 0;
    while (t--)
    {
        int m, c;
        std::cin >> m >> c;
        if (m>c)
            mishkaCount++;
        else if(c>m)
            chrisCount++;
    }
    if(mishkaCount > chrisCount)
        std::cout << "Mishka" << '\n';
    else if(chrisCount > mishkaCount)
        std::cout << "Chris" << '\n';
    else
        std::cout << "Friendship is magic!^^" << '\n';
}
