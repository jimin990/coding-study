#include <iostream>

int main(void){

    int N;

    std::cin >> N;

    if(N > 10000){
        std::cout << "Time limit exceeded";
    }else{
        std::cout << "Accepted";
    }

    return 0;
}