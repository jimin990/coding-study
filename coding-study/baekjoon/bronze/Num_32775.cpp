#include <iostream>

int main(void){

    int S,F;

    std::cin >> S >> F;

    std::cout << (S <= F ? "high speed rail" : "flight");

    return 0;
}