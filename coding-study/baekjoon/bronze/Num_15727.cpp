#include <iostream>

int main(void){
    int N;
    std::cin >> N;

    if(N%5 == 0){
        std::cout << N/5;
    }else{
        std::cout << N/5 + 1;
    }
    
    
    return 0;
}