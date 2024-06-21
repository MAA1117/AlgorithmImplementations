//euler20
/*
Find the sum of the digits in the number 100!
*/

#include <iostream>
#include <gmpxx.h>
#include <string>
#include "hfiles/Timer.h"

mpz_class Factorial(int n)
{
    if(n < 2 && n >= 0) return 1;
    if(n < 0) return -1; // undefined
    mpz_class product = 1;
    while (n >= 1)
    {
        product *= n;
        n--;
    }
    return product;
}

int main()
{
    Timer tr;
    int n = 100;
    int sum = 0;
    mpz_class factorialResult;
    std::string factorialString;

    try
    {
        factorialResult = Factorial(n);
        factorialString = factorialResult.get_str();

        for (int i = 0; i < factorialString.length(); i++)
        {
            sum += factorialString[i] - '0';
        }
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1;
    }

    std::cout << "Factorial result: " << factorialResult << std::endl;
    std::cout << "\nDigits: " << factorialString.length() << std::endl;
    std::cout << "Sum: " << sum << std::endl;
}

/*
NOTES
*****
100! = 9332621544394415268169923885626670049071596826438162146859296389521
       7599993229915608941463976156518286253697920827223758251185210916864
       000000000000000000000000

sum = 648

1000! ->
[Out]
Factorial result: 4023872600770937735437024339230039857193748642107146325437...
Digits: 2568
Sum: 10539
[1251us (1.251ms)]

10,000!
Digits: 35660
Sum: 149346
[14590us (14.59ms)]

100,000!
Digits: 456574
Sum: 1938780
[835437us (835.437ms)]

1,000,000!
Digits: 5565709
Sum: 23903442
[94409661us (94409.7ms)]

*/