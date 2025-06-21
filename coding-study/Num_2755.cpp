#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
int main(void) {

	int N, grade,sumGrade = 0;
	float sum = 0;;
	std::cin >> N;

	std::string str , record;
	for(int i =0;i<N;i++){
		std::cin >> str >> grade >> record;
		
		if (record == "A+") {
			sum += 4.3 * grade;
			sumGrade += grade;
		}
		else if (record == "A0") {
			sum += 4.0 * grade;
			sumGrade += grade;
		}
		else if (record == "A-") {
			sum += 3.7 * grade;
			sumGrade += grade;
		}else if (record == "B+") {
			sum += 3.3 * grade;
			sumGrade += grade;
		}
		else if (record == "B0") {
			sum += 3.0 * grade;
			sumGrade += grade;
		}
		else if (record == "B-") {
			sum += 2.7 * grade;
			sumGrade += grade;
		}
		else if (record == "C+") {
			sum += 2.3 * grade;
			sumGrade += grade;
		}
		else if (record == "C0") {
			sum += 2.0 * grade;
			sumGrade += grade;
		}
		else if (record == "C-") {
			sum += 1.7 * grade;
			sumGrade += grade;
		}
		else if (record == "D+") {
			sum += 1.3 * grade;
			sumGrade += grade;
		}
		else if (record == "D0") {
			sum += 1.0 * grade;
			sumGrade += grade;
		}
		else if (record == "D-") {
			sum += 0.7 * grade;
			sumGrade += grade;
		}
		else {
			sum += 0;
			sumGrade += grade;
		}
		
	}



	std::cout << std::fixed << std::setprecision(2) << std::round(sum / sumGrade * 100) / 100;
	return 0;
}