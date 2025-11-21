#include <iostream>

int main(void){

    int sum;

    std::cin >> sum;

    for(int i =0;i<9;i++){
        int n;

        std::cin >> n;

        sum-=n;
    }

    std::cout << sum;
    return 0;
}

