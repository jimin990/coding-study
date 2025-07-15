#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    std::vector<int> arr1(N);

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }

    std::copy(arr.begin(),arr.end(),arr1.begin());

    std::sort(arr.begin(),arr.end());

    arr.erase(std::unique(arr.begin(),arr.end()),arr.end());



    for(int i =0;i<N;i++){

        std::cout << std::lower_bound(arr.begin(),arr.end(),arr1[i]) - arr.begin() << " "; 
        
    }


    return 0;
}