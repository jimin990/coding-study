#include <iostream>
#include <algorithm>

int arr[1000000];

int sz = 0;

void push(int num){

    arr[++sz] = num;

    int idx = sz;

   while(idx != 1){
        int tmp = idx/2;

        if(arr[tmp] <= arr[idx]) break;
        std::swap(arr[tmp],arr[idx]);
        idx = tmp;
    }

}

int top(){
    return arr[1];
}

void pop(){
    arr[1] = arr[sz--];

    int idx = 1;
    while(2 * idx <= sz){
        int lc = 2 * idx,rc = 2*idx + 1;
        int minc = lc;
        if(arr[lc] > arr[rc]) minc = rc;
        if(arr[minc] >= arr[idx]) break;
        std::swap(arr[minc],arr[idx]);
        idx = minc;
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,input;

    std::cin >> N;


    for(int i = 0;i<N;i++){
        
        std::cin >> input;

        if(input == 0){

            if(sz == 0){
                std::cout << "0" << "\n";
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