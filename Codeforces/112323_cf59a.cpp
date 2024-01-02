#include <iostream>
#include <string>
#include <algorithm>

std::string correctWordCase(const std::string &word) {
	int upperCount = std::count_if(word.begin(), word.end(), ::isupper);
	int lowerCount = word.size() - upperCount;
	std::string correctWord = word;

	if (upperCount > lowerCount) {
		std::transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::toupper);
	} else {
		std::transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::tolower);
	}
	return correctWord;
}

int main() {
	std::string word;
	std::cin >> word;
	std::string correctWord = correctWordCase(word);
	std::cout << correctWord << std::endl;
	return 0;
}