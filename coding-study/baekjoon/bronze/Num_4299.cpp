#include <iostream>

int main(void){

    int x, y;

    std::cin >> x >> y;

    if((x < y) || ((x + y)%2 != 0)){
        std::cout << -1;
        return 0;
    }

    int B = (x - y) /2;
    int A = B + y;

    int min = std::min(A,B);
    int max = std::max(A,B);

    std::cout << max << " " << min;
    return 0;
}