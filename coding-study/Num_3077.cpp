#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {

	int N;
	std::cin >> N;

	std::map<std::string, int> wars;
	// std::map<std::string, int> anwsers;

	std::vector<std::string> anwsers;

	int score = 0;

	std::string war;

	for (int i = 0; i < N; i++) {
		
		std::cin >> war;

		wars.insert({war,i});
	}

	std::string anwser;

	for (int i = 0; i < N; i++) {

		std::cin >> anwser;

		//anwsers.insert({ anwser,i });

		anwsers.push_back(anwser);

		if (wars[anwser] == i) {
			score++;
		}

	}

	if (score == N) {
		std::cout << score << "/" << N * (N - 1) / 2;
		
		return 0;
	}
	else {
		score = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			
			if (wars[anwsers[i]] < wars[anwsers[j]]) {
				score++;
			}
		}
	}

	std::cout << score << "/" << N * (N - 1) / 2;

	return 0;
}