#include <iostream>
#include <string>

int main(void){

    int i = 1;
    while(true){

        std::string str;

        std::getline(std::cin,str);
        
        if(str == "0") break;

        std::cout << "Case " << i++ << ": Sorting... done!" << "\n";
    }

    return 0;
}