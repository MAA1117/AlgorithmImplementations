//euler1
/*
find the sum of all multiples of 3 or 5 below 1000 
*/
#include <iostream>

int main()
{
    int sum = 0;
    int rangeMax = 1000;

    for (int i = 1; i < rangeMax; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
}

/*
#python

In [3]: def Euler1(n):
   ...:     sum = 0
   ...:     for i in range(1, n):
   ...:         if i % 3 == 0 or i % 5 == 0:
   ...:             sum += i
   ...:     print(sum)
   ...:
In [5]: Euler1(1000)
233168
*/