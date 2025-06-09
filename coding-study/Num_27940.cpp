#include <iostream>

int main() {

	int N, M,K, t, r, overflow = 0;

	std::cin >> N >> M >> K;

	for (int i = 1; i <= M; i++) {
		std::cin >> t >> r;

		overflow += r;

		if (overflow > K) {
			std::cout << i << " " << 1;
			return 0;
		}
	}

	std::cout << -1;


	
	return 0;
}