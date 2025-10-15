#include <iostream>
#include <algorithm>
#include <climits>

int min_count = INT_MAX;

void recrusion(long n,long target,int count){

    if(n == target){
        min_count = std::min(min_count,count);

    }else if(n > target){
        return;
    }

    recrusion(n*10 + 1,target,count+1);

    recrusion(n*2,target,count+1);
}

int main(void){

    long A,B;

    std::cin >> A >> B;

    recrusion(A,B,0);

    if(min_count == INT_MAX){
        std::cout << "-1";
    }else{
        std::cout << min_count+1;
    }

    return 0;
}