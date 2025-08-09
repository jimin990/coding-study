#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {

	int N;

	std::cin >> N;

	std::vector<int> U(N);

	std::vector<int> sum_U;

	for (int i = 0; i < N; i++) {
		std::cin >> U[i];
	}

	std::sort(U.begin(), U.end());

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum_U.push_back(U[i] + U[j]);
		}
	}

	std::sort(sum_U.begin(), sum_U.end());


	int max = 0;
	for (int i = N-1; i >= 0; i--) {
		for (int j = N-1; j >=0; j--) {
			int tmp = U[i] - U[j];

			if (std::binary_search(sum_U.begin(), sum_U.end(), tmp)) {
				max = std::max(max, U[i]);
			}
		}
	}

	std::cout << max;

	return 0;
}