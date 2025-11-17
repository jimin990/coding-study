#include <iostream>

int main(void){

    int sum = 0;
    while(true){

        int N;

        std::cin >> N;

        if(N == -1) break;

        sum+=N;
    }

    std::cout << sum;
    
    return 0;
}