#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string INPUT = 
        /* "5 2\n" */
        /* "0 4 5 1 0"; */

        "6 4\n"
        "0 1 2 3 4 5";

    std::istringstream iss(INPUT);
    std::cin.rdbuf(iss.rdbuf());

    int n, k;
    std::cin >> n >> k;
    int target = 5 - k;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        if (x <= target)
            count++;
    }
    int teams = count / 3;
    std::cout << teams << std::endl;
}
