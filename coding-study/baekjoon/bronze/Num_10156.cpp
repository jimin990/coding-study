#include <iostream>

int main(void){

    int K, N, M;

    std::cin >> K >> N >> M;

    std::cout << ((K*N) >= M ? (K*N) - M : 0);

    return 0;
}