//
//  Num_1697.cpp
//  coding-test
//
//  Created by 김지민 on 6/18/25.
//

#include <iostream>
#include <queue>
#include <algorithm>

int main(void){
    
    int N,K;
    std::cin >> N >> K;
    
    int arr[100001];
    
    for(int i =0;i<100001;i++){
        arr[i] = -1;
        
        if(i == N){
            arr[i] = 0;
        }
    }
    
    std::queue<int> que;
    
    que.push(N);
    
    
    while(arr[K] == -1){
        
        int tmp = que.front(); que.pop();
        
        for(int t : {tmp+1,tmp-1,tmp*2}){
            
            if(t<0 || t > 100001) continue;
            if(arr[t] != -1) continue;
            arr[t] = arr[tmp] + 1;
            
            que.push(t);
        }
        
    }
    
    std::cout << arr[K];
    return 0;
}
