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
            }
        }
    }
}
