#include <iostream>
#include <algorithm>

int main(void) {

	int N, k, input;

	std::cin >> N >> k;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		std::cin >> input;

		arr[i] = input;
	}

	std::sort(arr, arr + N, [](int A, int B) {
		return A > B;
		});

	std::cout << arr[k-1];

	return 0;
}