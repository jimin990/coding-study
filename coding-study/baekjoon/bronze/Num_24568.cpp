#include <iostream>

int main(void){

    int R, S;

    std::cin >> R >> S;

    int num = (R * 8 + S * 3) - 28;

    num >= 0 ? std::cout << num : std::cout << "0";
    return 0;
}