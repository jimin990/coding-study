#include <iostream>
#include <algorithm>
int main(void) {


	std::string str,str1;

	std::cin >> str;

	str1 = str;

	std::reverse(str.begin(), str.end());

	if (str1 == str) {
		std::cout << 1;
	}else {
		std::cout << 0;
	}
	return 0;
}

