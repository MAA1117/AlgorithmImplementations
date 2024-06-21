//euler14
/*
For n < 1E6, find the numer that gives the longest 3n + 1 sequence 
*/

#include <iostream>
#include "hfiles/Timer.h"

int main()
{
    Timer tr;
    int maxCountVal = 0;
    int maxCount = 0;
    int rangeMax = 1'000'000;
    for (int i = 1; i < rangeMax; i++)
    {
        int count = 1;
        long long n = i;
        while (n != 1)
        {
            if (n % 2) n = 3*n + 1;
            else n = n / 2;
            count++;
        }
        if (count > maxCount)
        {
            maxCountVal = i;
            maxCount = count;
        }
    }
    std::cout << maxCountVal << '\n' << maxCount << '\n';
}

/*
NOTES
*****
if (n % 2) n = 3*n + 1
else n = n / 2 

[Out]
n = 837799
count = 525
[503292us (503.292ms)]

*/