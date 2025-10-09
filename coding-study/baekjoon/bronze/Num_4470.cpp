#include <iostream>
#include <string>

int main(void){

    int N;

    std::cin >> N;
    std::cin.ignore();
    
    for(int i =1;i<=N;i++){
        std::string str;

        std::getline(std::cin,str);

        std::cout << i << ". " << str << "\n";
    }

    return 0;
}