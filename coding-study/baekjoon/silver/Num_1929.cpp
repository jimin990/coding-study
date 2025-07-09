//
//  Num_1929.cpp
//  coding-test
//
//  Created by 김지민 on 5/22/25.
//

#include <algorithm>
#include <iostream>

int main(){
    
    int M,N;
    std::cin >> M >> N;
    
    int prime[N+1];
    
    std::fill(prime, prime + N + 1, 1);
    
    prime[0] = prime[1] = 0;
    
    for(int i = 2; i * i <= N ;i++){
        if(prime[i] == 1){
            for(int j = i * i;j<=N;j+=i){
                prime[j] = 0;
            }
        }
    }
    
    for(int i=M;i <= N;i++){
        if(prime[i] == 1){
            std::cout << i << "\n";
        }
    }
    
    return 0;
}
