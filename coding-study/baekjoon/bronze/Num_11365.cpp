#include <iostream>
#include <string>
#include <algorithm>

int main(void){

    while(true){
        std::string str;

        std::getline(std::cin,str);

        if(str == "END") break;

        std::reverse(str.begin(), str.end());
        std::cout << str << "\n";
    }

    return 0;
}