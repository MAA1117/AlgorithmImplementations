#include <iostream>

int main() {
	int a;
	std::cin >> a;

	int b = a / 5;

	if (a % 5 > 0) {
		b += 1;
	}

	std::cout << b;

	return 0;
}