#include <iostream>
#include <vector>
int main() {

	int N;
	std::cin >> N;

	std::vector<int> arr;

	for (int i = 3; i <= N; i++) {
		arr.push_back(i);
	}

	arr.push_back(1);
	arr.push_back(2);

	for (int i = 0; i < N; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}