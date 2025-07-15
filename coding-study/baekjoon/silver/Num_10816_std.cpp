#include <iostream>
#include <algorithm>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,M;

    std::cin >> N;

    int* arr = new int[N];

    for(int i =0;i<N;i++){

        std::cin >> arr[i];

    }

    std::sort(arr,arr+N);

    std::cin >> M;

    int k;

    while(M--){
        std::cin >> k;

        int* upper = std::upper_bound(arr,arr+N,k);

        int* lower = std::lower_bound(arr,arr+N,k);


        std::cout << (upper-arr) - (lower-arr) << " ";
        
    }

    return 0;
}

