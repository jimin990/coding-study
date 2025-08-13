#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;

    std::cin >> N;

    if(N == 0){
        std::cout << "0";
        return 0;
    }

    std::vector<int> arr(N);

    int sum = 0;
    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    
    }

    std::sort(arr.begin(),arr.end());

    float avg = N  * (15.0f/100);

    avg = std::round(avg);

    for(int i = avg;i<N-avg;i++){
        sum+=arr[i];
    }

    sum = std::round(sum/(N - 2*avg));
    std::cout << sum;

    return 0;
}