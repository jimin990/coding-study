#include <iostream>
#include <string>

int main(void) {

	std::string subjects, str;
	int N, result = 0;

	std::cin >> subjects >> N;


	for (int i = 0; i < N; i++) {
		std::cin >> str;

		if (subjects.substr(0,5).compare(str.substr(0, 5)) == 0) {
			result++;
		}
	}

	std::cout << result;
	
	return 0;
}