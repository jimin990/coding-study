#include <iostream>

int main(void){

    int M, D;

    std::cin >> M >> D;

    if(M == 2 && D == 18){
        std::cout << "Special";
    }else if(M >= 3){
        std::cout << "After";
    }else if(M >= 2 && D > 18){
        std::cout << "After";
    }else{
        std::cout << "Before";
    }

    return 0;
}