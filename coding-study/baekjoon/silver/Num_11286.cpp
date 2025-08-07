#include <iostream>
#include <cmath>
#include <algorithm>

int que[1000001];

int sz = 0;

void push(int num){

    que[++sz] = num;

    int idx = sz;

    while(idx != 1){
        int tmp = idx/2;
        if(std::abs(que[tmp]) <  std::abs(que[idx])) break;
        if(std::abs(que[tmp]) ==  std::abs(que[idx]) && que[tmp] <= que[idx]) break;
        std::swap(que[tmp],que[idx]);
        idx = tmp;
    }

}

int top(){
    
    return que[1];
}

void pop(){

    que[1] = que[sz--];

    int idx = 1;

    while(2*idx <= sz){
        int lc = 2*idx, rc = 2*idx + 1;
        int minc  = lc;
        if(std::abs(que[lc]) > std::abs(que[rc])) minc = rc;
        if(std::abs(que[lc]) == std::abs(que[rc]) && que[lc] > que[rc]) minc = rc;

        if(std::abs(que[idx]) < std::abs(que[minc])) break;
        if(std::abs(que[idx]) == std::abs(que[minc]) && que[idx] <= que[minc]) break;
        std::swap(que[idx],que[minc]);

        idx = minc;
    }

}

int main(){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    int input;
    for(int i=0;i<N;i++){

        std::cin >> input;

        if(input == 0){
            if(sz == 0){
                std::cout << "0\n";
            }else{
                std::cout << top() << "\n";
                pop();
            }
        }else{
            push(input);
        }
    }
    
    return 0;
}