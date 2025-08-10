#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,M;

    std::cin >> N >> M;

    std::vector<long> arr(N);

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }

    long min = LONG_MAX;

    std::sort(arr.begin(),arr.end());

    for(int i =0;i<N;i++){
        long tmp = M + arr[i];

        long t = std::lower_bound(arr.begin(),arr.end(),tmp) - arr.begin();

        if(t >= N) continue;

        min = std::min(min, arr[t] - arr[i]);


    }

    std::cout << min;

    return 0;
}