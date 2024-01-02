#include <iostream>

int main() {
    int k, n, w;
    std::cin >> k >> n >> w;

    long long totalCost = 0;
    for (int i = 1; i <= w; ++i) {
        totalCost += i * k; // Total cost is the sum of i*k for each banana i
    }

    long long amountToBorrow = totalCost - n; // Calculate the amount to borrow
    if (amountToBorrow < 0) {
        amountToBorrow = 0; // If he has enough money or more, he doesn't need to borrow
    }

    std::cout << amountToBorrow << std::endl; // Output the result

    return 0;
}
