#include <iostream>

int main(void){
    int A,B,C,D,E;

    std::cin >> A >> B >> C >> D >> E;

    int meat = A, time = 0;

    bool isFreeze = true;

    while(meat != B){
        
        if(meat < 0){
            meat+=1;
            time+=C;
        }else if(meat == 0 && isFreeze){
            time+= D;
            isFreeze = false;
        }else{
            meat+=1;
            time+=E;
        }
    }

    std::cout << time;

    return 0;
}