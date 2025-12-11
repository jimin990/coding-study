#include <iostream>

int main(void){

    int N;

    std::cin >> N;

    for(int i =0;i<N;i++){


        int Num;

        std::cin >> Num;

        for(int j=0;j<Num;j++){
            std::cout << "=";
        }

        std::cout << "\n";
    }

    return 0;
}