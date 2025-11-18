#include <iostream>
#include <algorithm>

int main(void){

    int HB1, HB2, HB3;

    int B1, B2;

    std::cin >> HB1 >> HB2 >> HB3;

    std::cin >> B1 >> B2;

    int minHB = std::min(HB1,std::min(HB2,HB3));
    int minB = std::min(B1,B2);

    std::cout << (minHB + minB) - 50;
    
    return 0;
}