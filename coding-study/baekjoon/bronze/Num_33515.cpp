#include <iostream>

int main(void){

    int A,B;

    std::cin >> A >> B;

    if(A>=B){
        std::cout << B;
    }else{
        std::cout << A;
    }
    

    return 0;
}