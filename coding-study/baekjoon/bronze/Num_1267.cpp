#include <iostream>

int main(void){

    int N;

    std::cin >> N;

    int yungsik = 0;
    int minsik = 0;

    for(int i =0;i<N;i++){
        int time;

        std::cin >> time;

        yungsik += (time / 30) * 10;

        yungsik+=10;

        minsik += (time / 60) * 15;
        minsik+=15;
    }

    if(minsik > yungsik){
            std::cout << "Y " << yungsik; 
        }else if(minsik < yungsik){
            std::cout << "M " << minsik; 
        }else{
            std::cout << "Y M " << yungsik;
        }

    return 0;
}