#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main(void){

    int N,M;
    std::cin >> N >> M;

    std::vector<int> arr(N);

    for(int i =0;i<N;i++){
        std::cin >> arr[i];
    }

    std::sort(arr.begin(),arr.end());

    int st =0,en = 0;

    int min = INT_MAX;

    while(st < N && en < N){
        int tmp = arr[en] - arr[st];

        if(tmp < M){
            en++;
            continue;
        } 

        min = std::min(min,tmp);
        st++;
    }

    std::cout << min;

    return 0;
}