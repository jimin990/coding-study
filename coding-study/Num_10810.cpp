#include <iostream>
#include <algorithm>

int main(){
    
    int N,M;
    
    std::cin >> N >> M;
    
    int arr[101];
    
    std::fill(arr,arr+100,0);
    
    for(int o =0;o < M;o++){
        
        int i,j,k;
        
        std::cin >> i >> j >> k;
        
        for(;i <= j;i++){
            arr[i] = k;
        }
        
    }
    
    for(int o = 1; o <= N;o++){
        std::cout << arr[o] << " ";
    }
    
    return 0;
}
