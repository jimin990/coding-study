#include <iostream>

int main(void){

    long N;

    std::cin >> N;

    std::cout << N - (N * 22 / 100) << " " << (N * 80 / 100) + (N * 20 / 100) - ((N * 20 / 100) * 22 / 100);

    return 0;
}