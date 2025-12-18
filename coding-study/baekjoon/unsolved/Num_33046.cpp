#include <iostream>

int main(void){

    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    int left =  (A + B)/ 4 + (A + B) % 4;
    std::cout << left;

    return 0;
}