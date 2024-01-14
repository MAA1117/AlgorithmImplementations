//euler9
/*
Find the pythagorean triplet where A + B + C = 1000.
*/

#include <iostream>
#include <complex>
#include <cmath>

std::pair<double, double> complexPythagoras(int a, int b)
{
    std::complex<double> expr = std::pow(std::complex<double>(a, b), 2);
    double A = expr.real();
    double B = expr.imag();
    double C = std::sqrt(A*A + B*B);
    return {std::abs(A), B};
}

int main()
{
/*  //fast I/O if you want it

    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);
*/
    for (int a = 1; a < 25; ++a)
    {
        for (int b = a; b < 25; ++b)
        {
            auto [A, B] = complexPythagoras(a, b);
            double C = std::sqrt(A*A + B*B);
            if (A + B + C == 1000)
            {
                std::cout << "Triplet: " << A << ", " << B << ", " << C << '\n';
                std::cout << "Product: " << A * B * C << '\n';
/* 
                '\n' is faster than std::endl because it doesn't flush the buffer,
                which is ok when it's not vital that the output is printed immediately.
*/
                return 0;
            }
        }
    }
}
