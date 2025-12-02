#include <iostream>
#include <string>

int main(void){

    std::string str;

    while(true)
    {
        std::cin >> str;

        if(str == "animal"){
            std::cout << "Panthera tigris" << "\n";
        }else if(str == "flower"){
            std::cout << "Forsythia koreana" << "\n";
        }else if(str == "tree"){
            std::cout << "Pinus densiflora" << "\n";
        }else{
            break;
        }
    }

    return 0;
}