#include <iostream>

int main(void){

    int N;

    std::cin >> N;

    //2 3 5 9 17

    int sum = 2;

    for(int i =0;i<N;i++){
        sum = sum + (sum - 1);
    }

    std::cout << sum * sum; 

    return 0;
}