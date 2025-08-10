#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,S;

    std::cin >> N >> S;

    std::vector<int> arr(N);

    for(int i =0;i<N;i++){
        std::cin >> arr[i];
    }

    int st = 0,en = 0;

    long sum = arr[0];
    int min_diff = INT_MAX;

    while(en < N){

        if(sum >= S){

            min_diff = std::min(min_diff,(en - st + 1));

            sum-=arr[st];
            st++;

        }else{
            en++;
            if(en>=N) break;
            sum+=arr[en];
        }

    }

    if(min_diff == INT_MAX){
        std::cout << 0;
    }else{
        std::cout << min_diff;
    }   

    return 0;
}