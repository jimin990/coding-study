#include <iostream>

int main(void){

    char N;

    std::cin >> N;

    if(std::toupper(N) == 'N'){
        std::cout << "Naver D2";
    }else{
        std::cout << "Naver Whale";
    }

    return 0;
}