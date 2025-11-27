#include <iostream>

int main(void){

    int A, P, C;

    std::cin >> A >> P >> C;

    std::cout << ((A + C) > P  ? (A + C) : P);
    return 0;
}