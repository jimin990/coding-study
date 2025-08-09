#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M;

	std::cin >> N >> M;

	std::vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr.begin(), arr.end());

	int left = 0, right = arr[N-1];

	int max = 0;

	while (left <= right) {
	
		int mid = left + (right - left) / 2;

		long sum = 0;
		for (int i = 0; i < N; i++) {
			int tmp = arr[i] - mid;
			if (tmp < 0) continue;
			sum += tmp;
		}

		if (sum < M) {
			right = mid -1;
		}else {
			left = mid + 1;

			max = mid;
		}
	}

	std::cout << max;

	return 0;
}