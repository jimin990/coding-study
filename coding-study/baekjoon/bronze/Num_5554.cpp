#include <iostream>

int main(void){

    int sum =0;

    for(int i =0;i<4;i++){
        int n;

        std::cin >> n;

        sum+=n;

    }

    std::cout << sum /60 <<"\n" << sum%60;

    return 0;
}