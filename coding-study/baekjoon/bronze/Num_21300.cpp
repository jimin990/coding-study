#include <iostream>

int main(void){

    int sum = 0;

    for(int i =0;i<6;i++){

        int N;

        std::cin >> N;

        sum += N*5;
    }

    std::cout << sum;

    return 0;
}