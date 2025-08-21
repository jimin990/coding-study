#include <iostream>
#include <vector>
#include <cmath>

int N,c,r;

int count = 0;

void Z(int x, int y, int nn){

    if(nn == 1){

        if(x == c && y == r){
            std::cout << count;
            return;
        }

        count++;

        return;
    }

    if(x <= c && y <= r){
        Z(x,y,nn/2);
    }else if(x <= c && y +nn/2 <= r){
        Z(x,y + nn/2, nn/2);
    }else if(x +nn/2 <= c && y <= r){
        Z(x + nn/2,y,nn/2);
    }else{
        Z(x + nn/2,y + nn/2, nn/2);
    }
    

    

   

}

int main(void){

    std::cin >> N >> c >> r;

    int qn = std::pow(2,N);

    int q = 0;

    if(qn/2 <= c){
        q++;
    }else{
        
    }

    if(qn/2 <= r){

    }else{
        
    }

    Z(0,0,qn);

    return 0;
}