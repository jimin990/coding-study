#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int A,B;
    std::cin >> A >> B;

    std::vector<int> A_arr;
    std::vector<int> B_arr;

    int input;

    for(int i =0;i<A;i++){
        
        std::cin >> input;

        A_arr.push_back(input);
    }
    
    for(int i =0;i<B;i++){
        
        std::cin >> input;

        B_arr.push_back(input);
    }

    std::sort(A_arr.begin(),A_arr.end());

    std::sort(B_arr.begin(),B_arr.end());

    std::string str = "";

    int count = 0;
    for(int i =0;i<A;i++){

        int find = std::binary_search(B_arr.begin(),B_arr.end(),A_arr[i]);

        if(!find){
            str += std::to_string(A_arr[i]) + " ";
            count++;
        }
        
    }

    if (!str.empty()) str.pop_back();  // 마지막 공백 제거

    std::cout << count << "\n" << str;

}