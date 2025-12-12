#include <iostream>
#include <algorithm>

int main(void){

    int N, M;

    std::cin >> N >> M;

    int count = 0;

    count = std::min(N/2,M/2);

    std::cout << count;

    return 0;
}