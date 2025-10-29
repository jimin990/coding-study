#include <iostream>
#include <string>

int main(void){

    std::string str;

    std::cin >> str;

    if(str == "SONGDO"){
        std::cout << "HIGHSCHOOL";
    }else if(str == "CODE"){
        std::cout << "MASTER";
    }else if(str == "2023"){
        std::cout << "0611";
    }else{
        std::cout << "CONTEST";
    }

    return 0;
}