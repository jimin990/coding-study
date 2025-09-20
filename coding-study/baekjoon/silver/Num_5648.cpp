#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;
    
    std::vector<std::string> str_arr(N);
    std::vector<long long> int_arr(N);

    for(int i = 0; i < N; i++){
        std::cin >> str_arr[i];
    }

    for(int i = 0; i < N; i++){
        std::reverse(str_arr[i].begin(), str_arr[i].end());
        int_arr[i] = std::stoll(str_arr[i]);
    }

    std::sort(int_arr.begin(), int_arr.end());

    for(int i = 0; i < N; i++){
        std::cout << int_arr[i] << "\n";
    }

    return 0;
}
