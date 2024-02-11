//cf1374a
#include <iostream>
//#include "C:\dev\src\hfiles\Timer.h"

int main()
{
    int t;
    std::cin >> t;


    for (int i = 0; i < t; i++)
    {
        
        int x, y, n;
        std::cin >> x >> y >> n;
        // find max integer k in range 0 -> n, where k % x == y
        
        //Timer timer;
        std::cout << n - ((n - y) % x) << std::endl;
/*
        for (int j = y; j <= n; j += x)
        {
            k = j;
        }

        std::cout << k << std::endl;
*/
    } 
}

/*
issues encountered:

1. time limit exceeded

notes:

7 5 12345
k % 7 == 5
5, 12, 19, 26, ..., 12339 (12345 - 6)

10 5 15
k % 10 == 5
5, 15 (15 - 0)

HYPOTHESIS:

n - ((n - y) % x) == answer

*/