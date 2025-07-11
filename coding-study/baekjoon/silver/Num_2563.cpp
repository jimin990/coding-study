#include <iostream>

int main(void) {
	
	int n,x, y;

	int arr[100][100] = { 0 };

	std::cin >> n;

	while (n--) {
		std::cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				arr[i][j] = 1;
			}
		}
	}

	int size = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			
			std::cout << arr[i][j] << " ";
			if (arr[i][j] == 1) {
				size++;
			}
		}

		std::cout << "\n";
	}

	std::cout << size;

	return 0;
}