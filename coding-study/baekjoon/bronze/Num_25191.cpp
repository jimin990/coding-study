#include <iostream>

int main(void){
    
    int N, A, B;

    std::cin >> N >> A >> B;

    int num = (A / 2) + B;

    std::cout << (num < N ? num : N);
    
    return 0;
}