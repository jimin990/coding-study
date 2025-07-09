#include <iostream>
#include <string>

int main(void) {
	
	std::string A,B,upperA,upperB;

	std::cin >> A >> B;



	for (auto i = A.begin(); i < A.end(); i++) {
		upperA.push_back(std::toupper(*i));
	}


	for (auto i = B.begin(); i < B.end(); i++) {
		upperB.push_back(std::toupper(*i));
	}

	if (A == "null") {
		std::cout << "NullPointerException" << "\n";
	}
	else if (A == B) {
		std::cout << "true" << "\n";
	}
	else {
		std::cout << "false" << "\n";
	}
	

	if (A == "null") {
		std::cout << "NullPointerException" << "\n";
	}
	else if (B == "null") {
		std::cout << "false" << "\n";
	}
	else if (upperA == upperB) {
		std::cout << "true" << "\n";
	}
	else {
		std::cout << "false" << "\n";
	}


	return 0;
}