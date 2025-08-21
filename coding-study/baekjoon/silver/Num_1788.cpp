#include <iostream>
#include <vector>
#include <cmath>

int main(void){

    int n;
    std::cin >> n;

    std::vector<long> pivonachi_plus(1000001,0);

    std::vector<long> pivonachi_minus(1000001,0);

    pivonachi_plus[0] = 0;
    pivonachi_plus[1] = 1;

    for(int i =2;i<=1000000;i++){
        pivonachi_plus[i] = (pivonachi_plus[i-1] + pivonachi_plus[i-2]) % 1000000000;
    }

    pivonachi_minus[1000000] =  pivonachi_plus[1] - pivonachi_plus[0];
    pivonachi_minus[999999] = pivonachi_plus[0] -  pivonachi_minus[1000000];
    pivonachi_minus[999998] = pivonachi_minus[1000000] - pivonachi_minus[999999];

    for(int i =999997;i >= 0;i--){
        pivonachi_minus[i] = (pivonachi_minus[i+2] - pivonachi_minus[i+1]) % 1000000000 ;
    }

    if(n > 0){

        std::cout << "1" << "\n" << pivonachi_plus[n];

    }else if(n < 0){

        n = std::abs(n);
        
        long tmp = pivonachi_minus[1000000-n+1];

        if(tmp > 0){
            std::cout << "1" << "\n" << tmp;
        }else{
            std::cout << "-1" << "\n" << std::abs(tmp);
        }
        
    }else{
        std::cout << "0" << "\n" << "0";
    }

    return 0;
}