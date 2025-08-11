#include <iostream>

int main(void){

    while(true){

        int num1,num2;

        std::cin >> num1 >> num2;

        if(num1 == 0 && num2 == 0) return 0;

        if(num1 > num2){
            std::cout << "Yes\n";
        }else{
            std::cout << "No\n";
        }
    }
    
    return 0;
}