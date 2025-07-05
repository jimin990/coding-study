#include <iostream>

int main(void) {

	int max = -1,x,y;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
		
			int m;
			std::cin >> m;

			if (max < m) {
				max = m;
				x = i;
				y = j;
			}


		}
	}


	std::cout << max << "\n" << x << " " << y;

	return 0;
}