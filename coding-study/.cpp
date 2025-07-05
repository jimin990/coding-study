#include <iostream>

int main(void) {

	int T;

	double d;

	std::cin >> T;

	for (int i = 0; i < T; i++) {
		std::cin >> d;

		d /= 0.25;
		std::cout << d << " ";
		d /= 0.1;

		std::cout << d << " ";
		d /= 0.05;

		std::cout << d << " ";
		d /= 0.01;
		std::cout << d << " ";

		std::cout << "\n";
	}


	return 0;
}