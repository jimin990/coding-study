#include <iostream>
#include <algorithm>

int main(void){

    int N;
    std::cin >> N;

    int* arr = new int[N];

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }

    std::sort(arr,arr+N);

    

    std::cout << "finish!";
    return 0;
}