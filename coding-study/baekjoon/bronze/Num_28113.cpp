#include <iostream>

int main(void){

    int N, A, B;

    std::cin >> N >> A >> B;

    if(A < B){
        std::cout << "Bus";
    }else if(A > B){
        std::cout << "Subway";
    }else{
        std::cout << "Anything";
    }

    return 0;
}