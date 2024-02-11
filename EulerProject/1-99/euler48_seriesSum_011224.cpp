//euler 48
/*
 * Find the last 10 digits of the series 
 * $$ \sum_{n = 1}^{1000} n^n $$
 */

#include <iostream>
#include <gmpxx.h>
#include <string>

int main()
{
    int n = 1000;
    mpz_class sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        mpz_class base = i;
        unsigned long int exponent = i;
        mpz_class num;
        mpz_pow_ui(num.get_mpz_t(), base.get_mpz_t(), exponent);
        sum += num;
    }

    std::string result;
    result = sum.get_str();
    for (int i = 9; i >= 0; i--)
    {
        
        std::cout << result[result.length() - (1 + i)];
    }
    std::cout << std::endl;
}
