#include <iostream>

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T,N;

    std::cin >> T;

    long arr[101] = {0};

    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;

    for(int i =4;i<101;i++){

        arr[i]  = arr[i-2] + arr[i-3];
    }   

    while(T--){

        std::cin >> N;

        std::cout << arr[N] << "\n";

    }
    
    return 0;
}