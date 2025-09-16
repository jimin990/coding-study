#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;

    std::cin >> N;

    std::vector<int> arr(N,0);

    std::vector<int> dp(N,1);

    for(int i =0;i<N;i++){

        std::cin >> arr[i];

        dp[i] = arr[i];
    }

    int max_tmp = arr[0];

    for(int i=0;i<N;i++){
        for(int j =0;j<i;j++){

            if(arr[i] > arr[j]){
                dp[i] = std::max(dp[i],dp[j] + arr[i]);
            }
        }

        max_tmp = std::max(max_tmp, dp[i]);
    }

    std::cout << max_tmp;
    
    return 0;
}