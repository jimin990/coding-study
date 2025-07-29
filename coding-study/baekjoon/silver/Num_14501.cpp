#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    
    int N;
    std::cin >> N;

    
    std::vector<std::vector<int>> arr(N,std::vector<int>(2,0));
    std::vector<int> max_arr(N,0);

    int T,P;
    for(int i =0;i<N;i++){
        std::cin >> T >> P;

        arr[i][0] = T;

        if(i+T <= N){
            arr[i][1] = P;
            max_arr[i] = P;
        }

    }

    for(int i= 0;i<N;i++){

        for(int j=i + arr[i][0];j<N;j++){
            max_arr[j] = std::max(max_arr[j],arr[j][1] + max_arr[i]);
        }

    }

    std::sort(max_arr.begin(),max_arr.end());

    std::cout << max_arr[N-1];
 
    return 0;
}