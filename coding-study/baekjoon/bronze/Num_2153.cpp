#include <iostream>
#include <string>

int main(void){

    std::string str;

    std::cin >> str;

    int sum = 0;

    for(int i =0;i<str.length();i++){
        
        if(97 <= str[i] && str[i] <= 122){
            sum+= str[i] - 96;
        }else{
            sum += str[i] - 38;
        }
        
    }

    int status = 1;

    for(int i = 2;i<sum;i++){
        if(sum%i == 0){
            status = 0;
        }
    }

    if(status == 0){
        std::cout << "It is not a prime word.";
    }else{
        std::cout << "It is a prime word.";
    }
    
    return 0;
}