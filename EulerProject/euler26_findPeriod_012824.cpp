// Problem: https://projecteuler.net/problem=26
/*
Find the value of d < 1000 for which 1/d contains the longest recurring cycle
in its decimal fraction.
*/

#include <iostream>
#include <cstdint>
#include <algorithm> // std::__gcd()

typedef uint64_t UI64;

UI64 findPeriod(UI64 numerator, UI64 denominator){
    UI64 gcd = std::__gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    while(denominator % 2 == 0) denominator /= 2;
    while(denominator % 5 == 0) denominator /= 5;

    if(denominator == 1) return 0;

    UI64 period = 1;
    UI64 remainder = 10 % denominator;
    while(remainder != 1){
        remainder = (remainder * 10) % denominator;
        ++period;
    }
    return period;
}

int main(){
    UI64 longest_period = 0;
    UI64 index_longest = 0;
    for(int i=1; i<1000; i+=2){
        UI64 denominator = i;
        UI64 period = findPeriod(1, denominator);
        if(period > longest_period){
            longest_period = period;
            index_longest = i;
        }
    }
    std::cout << index_longest << " (" << longest_period << ")" << std::endl; 
}
