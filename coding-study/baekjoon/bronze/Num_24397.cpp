#include <iostream>
#include <string>

int main(void){

    std::string str = "SciComLove";
    int N;

    std::cin >> N;

    N%=10;

    for(int i = N;i<10;i++){
        std::cout << str[i];

    }

    for(int i = 0;i<N;i++){
        std::cout << str[i];

    }

    return 0;
}