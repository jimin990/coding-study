#include <iostream>
#include <vector>

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,M,i,j;
    std::cin >> N >> M;

    std::vector<int> arr(N+1,0);

    for(int k =1;k<=N;k++){

        std::cin >> arr[k];

        arr[k] += arr[k-1];
    }

    for(int k =0;k<M;k++){

        std::cin >> i >> j;

        std::cout << arr[j] - arr[i-1] << "\n";

    }

    return 0;
}