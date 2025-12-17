#include <iostream>

int main(void){

    int N, W, H, L;

    std::cin >> N >> W >> H >> L;

    std::cout << (N >= ((W / L) * (H / L)) ? ((W / L) * (H / L)) : N);

    return 0;
}