#include <iostream>

int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		if (n % 3) {
			std::cout << "First" << std::endl;
		} else {
			std::cout << "Second" << std::endl;
		}
	}
	return 0;
}