#include <iostream>
#include <vector>

int main() {

	int N, M;
	std::cin >> N >> M;

	std::vector<int> arr;

	for (int i = 1; i <= N; i++) {
		arr.push_back(i);
	}

	int i, j;

	for (int p = 0; p < M; p++) {
	
		std::cin >> i >> j;

		i--;
		j--;

		for (int k = i; k < j; k++,j--) {
			int tmp = arr[k];

			arr[k] = arr[j];

			arr[j] = tmp;


		}

	}

	for (int i = 0; i < N; i++) {

		std::cout << arr[i] << " ";
	}



	return 0;
}