#include <iostream>

int main(void) {

	int A,B;

	while (true) {
		std::cin >> A >> B;
		
		if (A == 0) {
			return 0;
		}

		if (B % A == 0) {

			std::cout << "factor" << "\n";
		}
		else if(A%B == 0){
			std::cout << "multiple" << "\n";
		}
		else {
			std::cout << "neither" << "\n";
		}

	}

	return 0;
}