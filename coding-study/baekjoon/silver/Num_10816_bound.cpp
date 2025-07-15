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

    int k,st,mid,en;

    while(M--){
        std::cin >> k;

        st = 0;

        en = N;

        
        while(st<en){

            mid = (st + en ) / 2;

            if(arr[mid] > k){
                en = mid;
            }else if(arr[mid] <= k){
                st = mid + 1;
            }
        }

        int tmp = st;

        st = 0;

        en = N;

        while(st<en){

            mid = (st + en ) / 2;

            if(arr[mid] >= k){
                en = mid;
            }else if(arr[mid] < k){
                st = mid + 1;
            }
        }

        std::cout << tmp - st << " ";
        
    }

    return 0;
}

