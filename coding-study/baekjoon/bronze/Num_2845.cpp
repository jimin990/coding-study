#include <iostream>

int main(void){


    int L,P;
    std::cin >> L >> P;

    for(int i =0;i<5;i++){
        int input;
        std::cin >> input;
        std::cout << input - (L * P) << " ";
    }

    return 0;
}