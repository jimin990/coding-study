#include <iostream>

int main(void){

    int T;

    std::cin >> T;

    int X =0,Y=0;

    for(int i =0;i<T;i++){

        char C;
        std::cin >> C;

        if(C == 'D'){
            X++;
        }else{
            Y++;
        }

        if(X >= Y+2 || Y >= X+2) break;
    }

    std::cout << X << ":" << Y;

    return 0;
}