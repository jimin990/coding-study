#include <iostream>

int main(void){
    
    int num1, num1_reverse = 0, num2, num2_reverse = 0;
    
    std::cin >> num1 >> num2;
    int j = 1000;
    
    for(int i =0; i< 3; i++){
        int tmp = num1 % 10;
        num1 /= 10;
        
        j/=10;
        num1_reverse += j * tmp;
        
        tmp = num2 % 10;
        num2 /= 10;
        
        num2_reverse += j * tmp;
        
    }
    
    if(num1_reverse > num2_reverse){
        std::cout << num1_reverse;
    }else{
        std::cout << num2_reverse;
    }
    


    return 0;
}
