#include <iostream>
#include <vector>

int main(void){

    int N;

    std::cin >> N;
    
    std::vector<long long> arr(N+1,0);

    arr[0] = 0;
    arr[1] = 9;

    for(int i =2;i<N+1;i++){

        arr[i] = (((arr[i-1] -1) * 2) + 1) % 1000000000;
    }

    std::cout << arr[N];

    return 0;
}