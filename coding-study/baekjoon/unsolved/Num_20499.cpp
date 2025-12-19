#include <iostream>
#include <string>

int main(void){

    std::string KDA;

    std::cin >> KDA;

    int K = KDA[0] - '0';
    int D = KDA[4] - '0';
    int A = KDA[2] - '0';

    if(K + A < D || D == 0){
        std::cout << "hasu";
    }else{
        std::cout << "gosu";
    }

    return 0;
}