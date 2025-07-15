#include <iostream>
#include <algorithm>

int N,M;

int* arr;

int binarySeatch(int n){

    int st, mid, en;
    st = 0;
    en = N-1;

    while(st <= en){
        mid = (en + st) / 2;
        if(arr[mid] == n){
            return 1;
        }
        else if(n < arr[mid]){
            en = mid - 1;
        }else{
            st = mid + 1;
        }
    }

    return 0;
}

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N;

    arr = new int[N];

    for(int i=0;i<N;i++){
        
        std::cin >> arr[i];
        
    }

    std::sort(arr,arr+N);

    std::cin >> M;

    int input;

    for(int j =0; j<M;j++){

        std::cin >> input;
        
        std::cout << binarySeatch(input) << "\n";
    }

    return 0;
}