#include <iostream>
#include <string>
#include <algorithm>

int main(void) {

	std::string str;

	std::cin >> str;

	char* arr = new char[str.size()];

	for (int i = 0; i < str.size(); i++) {
		arr[i] = str[i];
	}
	
	std::sort(arr, arr + str.size(), [](int A, int B) {
		return A > B;
		});

	for (int i = 0; i < str.size(); i++) {
		std::cout << arr[i];
	}

	return 0;
}