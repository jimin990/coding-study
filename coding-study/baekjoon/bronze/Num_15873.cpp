#include <iostream>

int main(void){

    int N;
    std::cin >> N;

    int A = N/10,B;

    //1010

    if(A > 10){

        A = N/100;

        B = N - (A * 100);
    }else{
        
        B = N - (A * 10);
        
    }

    std::cout << A+B;

    return 0;
}