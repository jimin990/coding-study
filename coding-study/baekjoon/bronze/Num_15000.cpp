#include <iostream>
#include <string>

int main(void){

    std::string str;
    
    std::cin >> str;

    for(int i =0;i<str.length();i++){
        str[i] =  std::toupper(str[i]);
    }

    std::cout << str;

    return 0;
}