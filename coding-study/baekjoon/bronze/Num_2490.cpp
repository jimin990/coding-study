#include <iostream>

int main(void){

    for(int T=0;T<3;T++){

        int count = 0;

        for(int i =0;i<4;i++){

            int num;

            std::cin >> num;

            if(num == 0) count++;

        }

        if(count == 1){
            std::cout << "A";
        }else if(count == 2){
            std::cout << "B";
        }else if(count == 3){
            std::cout << "C";
        }else if(count == 4){
            std::cout << "D";
        }else{
            std::cout << "E";
        }

        std::cout << "\n";
    }
    
    return 0;
}