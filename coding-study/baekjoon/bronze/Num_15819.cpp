#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main(void){

    int N,I;

    std::cin >> N >> I;

    std::vector<std::string> arr;

    for(int i =0;i<N;i++){

        std::string str;

        std::cin >> str;

        arr.push_back(str);
    }

    std::sort(arr.begin(), arr.end());

    std::cout << arr[I-1];

    return 0;
}