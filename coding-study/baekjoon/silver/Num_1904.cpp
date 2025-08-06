#include <iostream>

int main(void){

    int N;
    std::cin >> N;

    long *arr = new long[1000001];

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 5;

    for(int i =5;i< 1000001;i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 15746;
    }


    std::cout << arr[N];
    return 0;
}