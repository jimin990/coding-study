#include <iostream>

int main(void){

    int A, T;

    std::cin >> A >> T;

    int P = 10 + 2 * (25 - A + T);

    P < 0 ? std::cout << "0" : std::cout << P;
    
    return 0;
}