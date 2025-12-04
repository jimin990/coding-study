#include <iostream>
#include <string>

int main(void){

    std::string str;

    std::cin >> str;

    if(str[0] == 'F'){
        std::cout << "Foundation";
    }else if(str[0] == 'C'){
        std::cout << "Claves";
    }else if(str[0] == 'V'){
        std::cout << "Veritas";
    }else if(str[0] == 'E'){
        std::cout << "Exploration";
    }

    return 0;
}