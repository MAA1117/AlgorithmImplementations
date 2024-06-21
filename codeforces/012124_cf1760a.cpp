#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    /* std::string INPUT = */ 
    /*     "9\n" */
    /*     "5 2 6\n" */
    /*     "14 3 4\n" */
    /*     "20 2 1\n" */
    /*     "1 2 3\n" */
    /*     "11 19 12\n" */
    /*     "10 8 20\n" */
    /*     "6 20 3\n" */
    /*     "4 1 3\n" */
    /*     "19 8 4"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */


    int t;
    std::cin >> t;
    while (t--)
    {
        std::vector<int> abc(3);
        std::cin >> abc[0] >> abc[1] >> abc[2];
        std::sort(abc.begin(), abc.end());
        std::cout << abc[1] << '\n';
    }
}
