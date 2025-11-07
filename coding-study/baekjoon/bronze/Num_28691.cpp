#include <iostream>

int main(void){

    char c;

    std::cin >> c;

    if(c == 'M'){
        std::cout << "MatKor";
    }else if(c == 'W'){
        std::cout << "WiCys";
    }else if(c == 'C'){
        std::cout << "CyKor";
    }else if(c == 'A'){
        std::cout << "AlKor";
    }else{
        std::cout << "$clear";
    }

    return 0;
}