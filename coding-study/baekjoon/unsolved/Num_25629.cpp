#include <iostream>
#include <vector>
#include <cmath>

int main(void){

    int N;

    std::cin >> N;

    std::vector<int> arr(N,0);

    for(int i =0;i<N;i++){    
        std::cin >> arr[i];
    }

    int odd = 0, even =0;

    for(int i =0;i<N;i++){    
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(std::abs(odd - even) <= 1){
        std::cout << "1";
    }else{
        std::cout << "0";
    }

    return 0;
}