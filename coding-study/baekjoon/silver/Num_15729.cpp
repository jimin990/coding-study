#include <iostream>

int arr[1000000];

int main() {

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		
		int b;
		std::cin >> b;
		arr[i] = b;
	}

	int count = 0;

	for (int i = 0; i < N-2; i++) {
		
		if (arr[i] == 1) {
			count++;

			if (arr[i + 1] == 1) {
				arr[i + 1] = 0;
			}
			else {
				arr[i + 1] = 1;
			}

			if (arr[i + 2] == 1) {
				arr[i + 2] = 0;
			}
			else {
				arr[i + 2] = 1;
			}
		}

	}

	std::cout << count;
	return 0;
}