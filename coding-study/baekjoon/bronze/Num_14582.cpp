#include <iostream>
#include <vector>

int main() {

	std::vector<int> ulrim(9, 0), startlink(9, 0);

	for (int i = 0; i < 9; i++) {
		std::cin >> ulrim[i];
	}

	for (int i = 0; i < 9; i++) {
		std::cin >> startlink[i];
	}
	
	int u = 0,s = 0;
	int score = 0;

	for (int i = 0; i < 9; i++) {
	
		score += ulrim[i];

		if (score > 0) {
			std::cout << "Yes";
			return 0;
		}
		
		score -=startlink[i];

		
	}
	
	std::cout << "No";
	return 0;
}