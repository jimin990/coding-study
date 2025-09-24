#include <iostream>

int main(void){

    int sum = 0;

    for(int i =0;i<5;i++){
        int num;
        
        std::cin >> num;

        sum += num;
    }
 
    std::cout << sum;

    return 0;
}