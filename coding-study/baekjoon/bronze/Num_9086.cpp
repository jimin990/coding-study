#include <iostream>
#include <string>

int main(void) {

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::string str;

		std::cin >> str;

		std::cout << str[0] << str[str.length()-1] << "\n";
	}

	return 0;
}