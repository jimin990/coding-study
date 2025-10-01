#include <iostream>

int main(void){

    int T,S;

    std::cin >> T >> S;

    if(S == 1 || !(12 <= T && T <= 16)){

        std::cout << 280;

    }else{

        std::cout << 320;
    }

    return 0;
}