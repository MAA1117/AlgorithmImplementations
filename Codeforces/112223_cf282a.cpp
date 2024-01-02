#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;

	int x = 0;

	for (int i = 0; i < n; ++i) {
		std::string a;
		std::cin >> a;
		if (a.find('+') != std::string::npos) {
			++x;
		} else {
			--x;
		}
	}

	std::cout << x;

	return 0;
}
