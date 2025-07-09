#include <iostream>
#include <vector>

int main(void) {

	int N,M;
	std::cin >> N >> M;
	
	std::vector<int> basket;

	basket.push_back(0);

	for (int i = 1; i <= N; i++) {
		basket.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		
		int i_b, j_b;

		std::cin >> i_b >> j_b;

		int tmp = basket[i_b];
		basket[i_b] = basket[j_b];
		basket[j_b] = tmp;
	}

	for (int i = 1; i <= N; i++) {
		std::cout << basket[i] << " ";
	}

	return 0;
}