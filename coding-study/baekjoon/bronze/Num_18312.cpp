#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main() {
    int N, K;
    std::cin >> N >> K;

    int count = 0;
    std::string k_str = std::to_string(K);

    for (int h = 0; h <= N; ++h) {
        for (int m = 0; m < 60; ++m) {
            for (int s = 0; s < 60; ++s) {
                std::stringstream ss;
                ss << std::setw(2) << std::setfill('0') << h
                    << std::setw(2) << std::setfill('0') << m
                    << std::setw(2) << std::setfill('0') << s;
                std::string time_str = ss.str();

                if (time_str.find(k_str) != std::string::npos) {
                    ++count;
                }
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
