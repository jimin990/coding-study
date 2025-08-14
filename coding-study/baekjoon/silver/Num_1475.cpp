#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
    
    int N;

    std::cin >> N;

    if(N == 0){
        std::cout << "1";
        return 0;
    }

    std::vector<int> vec(10,0);
    while(N !=0){
        int num = N % 10;

        vec[num]++;

        N/=10;
    }

    if((vec[6]+vec[9]) % 2 != 0){
        vec[6] = (vec[6] + vec[9]) / 2 + 1;
    }else{
        vec[6] = (vec[6] + vec[9]) / 2 ;
    }

    vec[9] = vec[6];

    std::sort(vec.begin(),vec.end());

    std::cout << vec[9];
    
    return 0;
}