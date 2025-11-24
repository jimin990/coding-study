#include <iostream>

int main(void){

    int L, A, B, C, D;

    std::cin >> L >> A >> B >> C >> D;

    int day = 0;

    while(A > 0 || B > 0){
        A-=C;
        B-=D;
        day++;
    }

    std::cout << L - day;

    return 0;
}