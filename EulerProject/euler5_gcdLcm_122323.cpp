//euler5
/*
find the smallest number that is divisible by every number 1-20
*/

#include <iostream>
#include "hfiles\Timer.h"

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    Timer tr;
    
    int result = 1;

    for (int i = 2; i <= 20; i++)
    {
        result = lcm(result, i);
    }

    std::cout << "Smallest number: " << result << '\n';
}



/*
FIRST SOLUTION
**************
bool rangeDiv(int n, int range)
{
    for (int i = 1; i <= range; i++)
    {
        if (n % i) return false;
    }
    return true;
}

int main()
{
    Timer tr;

    for (int i = 1; i < 1'000'000'000; i++)
    {
        if (rangeDiv(i, 20))
        {
            std::cout << "Smallest number: " << i << '\n';
            break;
        }
    }

}
*/
/*
Notes:
Original solution
    -> Smallest number: 232792560 -> 1920571us (1920.57ms)

Improved solution
    -> Smallest number: 232792560 -> 353us (0.353ms)

*/