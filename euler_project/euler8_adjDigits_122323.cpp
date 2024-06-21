//euler8
/*
find the 13 adjacent digits in the given 1000-digit number 
that have the greatest product
*/

#include <iostream>
#include <string>
#include "hfiles\Timer.h"

// Sliding window method
std::pair<long long, std::string> findMaxProductDigits(const std::string &digits, int adjacentCount)
{
    if (digits.length() < adjacentCount) return {0, ""};
    long long maxProduct = 0;
    long long currentProduct = 1;
    int zeroCount = 0;
    size_t maxProductStartPos = 0;

    // Initialize the first window
    for (int i = 0; i < adjacentCount; ++i)
    {
        int digit = digits[i] - '0';
        if (digit == 0) zeroCount++;
        else currentProduct *= digit;
    }
    if (zeroCount == 0)
    {
        maxProduct = currentProduct;
        maxProductStartPos = 0;
    }

    // Slide the window
    for (size_t i = adjacentCount; i < digits.length(); ++i)
    {
        int digitAdded = digits[i] - '0';
        int digitRemoved = digits[i - adjacentCount] - '0';

        if (digitRemoved == 0) zeroCount--;
        else currentProduct /= digitRemoved;

        if (digitAdded == 0) zeroCount++;
        else currentProduct *= digitAdded;

        if (zeroCount == 0 && currentProduct > maxProduct)
        {
            maxProduct = currentProduct;
            maxProductStartPos = i - adjacentCount + 1;
        }
    }
    std::string maxProductDigits = digits.substr(maxProductStartPos, adjacentCount);
    return {maxProduct, maxProductDigits};
}

// Simpler, less optimized method
/*
long long findMaxProduct(const std::string &digits, int adjCount)
{
    long long maxProduct = 0;
    for (size_t i = 0; i + adjCount <= digits.length(); ++i)
    {
        long long product = 1;
        for (int j = 0; j < adjCount; ++j)
        {
            product *= digits[i + j] - '0';
        }
        maxProduct = std::max(maxProduct, product);
    }
    return maxProduct;
}
*/

int main()
{
    Timer tr;

    std::string numberStr = 
        "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450";

    int adjacentCount = 13;
    auto [maxProduct, maxProductDigits] = findMaxProductDigits(numberStr, adjacentCount);
    
    std::cout << "Digits: " << maxProductDigits << std::endl;
    std::cout << "Product: " << maxProduct << std::endl;
    
}    

/*
NOTES
*****
73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043[557
6689664895]0445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

[Out] 
Digits: 5576689664895
Product: 23514624000

[706us (0.706ms)]
*/   