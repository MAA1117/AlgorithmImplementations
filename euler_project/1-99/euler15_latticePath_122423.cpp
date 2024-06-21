//euler14
/*
Find the n of routes through a 20 x 20 grid
*/

#include <iostream>

long long binomialCoefficient(int n, int k)
{
    if (k > n - k) k = n - k;
    long long result = 1;
    for (int i = 0; i < k; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

long long calculateRoutes(int gridSize)
{
    return binomialCoefficient(2 * gridSize, gridSize);
}

int main()
{
    int gridSize = 20;
    std::cout << "Number of routes through a " << gridSize << "x" << gridSize 
              << " grid: " << calculateRoutes(gridSize) << std::endl;
}

// C(2n, n) = C(2n, 2n - n) 
// -> C(n, k) = n! / (k! * (n - k)!)

