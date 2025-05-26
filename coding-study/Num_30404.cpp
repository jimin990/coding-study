 #include <iostream>
#include <vector>

int main() {

	int N, K;

	std::cin >> N >> K;
	std::vector<int> vec;

	if (N == 1) {
	
		std::cout << "1";
		return 0;
	}

	for (int i=0; i < N; i++) {
		int X;
		std::cin >> X;
		vec.push_back(X);
	}


	int count = 1;
	int K_tmp = K;

	for (int i = 0; i < N-1; i++) {
		K_tmp -= vec[i + 1] - vec[i];

		if (K_tmp < 0) {
			K_tmp = K;
			count++;
		}
		
	}

	std::cout << count;

	return 0;
}