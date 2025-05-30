#include <iostream>
#include <vector>

int main() {


	int N;
	std::cin >> N;

	std::vector<int> arr;


	int input;
	for (int i = 0; i < N; i++) {
		std::cin >> input;
		arr.push_back(input);
	}

	int v,n = 0;
	std::cin >> v;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			n++;
		}
	}


	std::cout << n;
	return 0;
}