#include <iostream>
#include <string>

int main(void){

    std::string str;

    std::cin >> str;

    int count = 0;

    for(int i=0;i<str.length();i++){

        if(count == 9){

            std::cout << str[i] << "\n";
            count = 0;

        }else{
            count++;
            std::cout << str[i];
        }
        
    }

    return 0;
}