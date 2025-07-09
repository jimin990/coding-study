#include <iostream>
#include <algorithm>

int main(void) {

	int n,avg = 0;

	int* arr = new int[5];

	for (int i = 0; i < 5; i++) {
		
		std::cin >> n;
		arr[i] = n;

		avg += n;
	}

	std::sort(arr, arr + 5);

	std::cout << avg / 5 << "\n" << arr[2];

	return 0;
}