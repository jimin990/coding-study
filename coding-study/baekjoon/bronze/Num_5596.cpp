#include <iostream>
#include <algorithm>

int main(void){

    int S=0,T=0;

    for(int i =0;i<4;i++){

        int num;

        std::cin >> num;

        S+=num;
    }

    for(int i =0;i<4;i++){

        int num;

        std::cin >> num;

        T+=num;
    }

    int max = std::max(S,T);

    std::cout << max;
    
    return 0;
}