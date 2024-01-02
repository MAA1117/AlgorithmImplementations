#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= static_cast<int>(std::sqrt(n)); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to check if a number has exactly two prime divisors
bool almost_prime(int k) {
    int prime_divisors = 0;
    for (int i = 2; i <= k; ++i) {
        if (k % i == 0 && is_prime(i)) {
            ++prime_divisors;
        }
    }
    return prime_divisors == 2;
}

int main() {
    int n;
    std::cin >> n;
    int count_almost_prime = 0;

    for (int i = 1; i <= n; ++i) {
        if (almost_prime(i)) {
            ++count_almost_prime;
        }
    }

    std::cout << count_almost_prime << std::endl;
    return 0;
}
