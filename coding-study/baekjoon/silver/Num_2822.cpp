#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {

	std::vector<std::pair<int,int>> scores(8);

	int score, sum_score = 0;
	for (int i = 0; i < 8; i++) {
		
		std::cin >> score;
		scores[i] = {score,i};
	}

	std::sort(scores.begin(), scores.end());
	std::vector<int> arr;

	for (int i = 3; i < 8; i++){
		sum_score += scores[i].first;
		arr.push_back(scores[i].second);
	}


	std::sort(arr.begin(), arr.end());

	std::cout << sum_score << "\n";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i]+1 << " ";
	}



	return 0;
}