#include <string>
#include <iostream>

int main(void) {
	
	int n;

	std::cin >> n;

	std::string str = "WelcomeToSMUPC";

	std::cout << str[(n-1) % 14];


	return 0;
}