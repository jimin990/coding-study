#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main(void){

    std::string str1,str2;

    std::cin >> str1 >> str2;

    std::vector<int> arr1(26,0),arr2(26,0);

    for(int i =0;i<str1.size();i++){
        arr1[str1[i] - 97]++; 
    }

    for(int i =0;i<str2.size();i++){
        arr2[str2[i] - 97]++; 
    }

    int result = 0;

    for(int i =0;i<arr1.size();i++){
        result += std::abs(arr1[i] - arr2[i]);
    }

    std::cout << result;
}