#include <iostream>
#include <string>

int main(void){

    std::string str1;
    std::string str2;

    std::cin >> str1 >> str2;

    if(str1.size() < str2.size()){
        std::cout << "no";
    }else{
        std::cout << "go";
    }
    return 0;
}