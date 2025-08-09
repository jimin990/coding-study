#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

class apsol {
public:
	bool operator()(int a, int b) {

		if (std::abs(a) != std::abs(b)) {
			return std::abs(a) > std::abs(b);
		}
		else {
			return a > 0 && b < 0;
		}
	}
};


int main(void) {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::priority_queue<int, std::vector<int>, apsol> pq;

	int input;

	while (N--) {
	
		std::cin >> input;

		if (input == 0) {
			if (pq.empty()) {
				std::cout << "0\n";
			}
			else {
				std::cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(input);
		}

	}
}