#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::vector<int> arr(3,0);

    std::cin >> arr[0] >> arr[1] >> arr[2];

    std::sort(arr.begin(), arr.end());

    std::cout << arr[1];
    
    return 0;
}