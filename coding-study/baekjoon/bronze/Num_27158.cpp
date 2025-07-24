#include <iostream>

int main(void){

    int N;
    std::cin >> N;

    int* arr = new int[N];

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }

    int sum = arr[0];

    for(int i =1;i<N;i++){

        if(arr[i-1]  != arr[i] - 1){
            sum+=arr[i];
        } 
    }

    std::cout << sum;

    return 0;
}