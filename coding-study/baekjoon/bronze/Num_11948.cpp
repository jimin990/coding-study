#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

    int sum = 0;

    std::vector<int> arr;

    for(int i =0;i<4;i++){
        int N;

        std::cin >> N;

        arr.push_back(N);    

    }

    std::sort(arr.rbegin(),arr.rend());

    sum+=arr[0];
    sum+=arr[1];
    sum+=arr[2];

    int N1,N2;

    std::cin >> N1 >> N2;

    sum+= std::max(N1,N2);
    
    std::cout << sum;

    return 0;
}