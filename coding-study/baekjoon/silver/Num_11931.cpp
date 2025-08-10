#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::vector<int> arr(N);

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }    

    std::sort(arr.begin(),arr.end(),std::greater<int>());

    for(int i =0;i<N;i++){

        std::cout << arr[i] << "\n";
    }
    return 0;
}