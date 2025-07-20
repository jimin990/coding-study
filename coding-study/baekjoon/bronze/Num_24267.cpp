#include <iostream>

int main(void){

    long long N;

    std::cin >> N;

    if(N < 3){
        std::cout << "0" << "\n" << "3";

    }else{
        std::cout << (N * (N-1) * (N-2)) / 6 << "\n" << "3";
    }

    return 0;
}