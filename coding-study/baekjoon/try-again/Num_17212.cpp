//
//  Num_17212.cpp
//  coding-test
//
//  Created by 김지민 on 5/20/25.
//

#include <iostream>
#include <climits>
#include <algorithm>

int main(){
    
    int N;
    std::cin >> N;
    
    int arr[100001];
        
    
    for(int i = 0;i< 100001;i++){
        
        arr[i] = INT_MAX;
        
        
    }
    
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 2;
    arr[5] = 1;
    arr[6] = 2;
    arr[7] = 1;
    
    for(int i = 8;i< 100001;i++){
        
        arr[i] = std::min(arr[i-1],std::min(arr[i-2],std::min(arr[i-5],arr[i-7]))) + 1;

    }
    
    std::cout << arr[N];
    return 0;
}



/** timeover solution
 
 #include <iostream>
 #include <climits>
 #include <algorithm>

 int minN = INT_MAX;

 
void recruit(int N, int i){
    
    if(N == 0){
        minN = std::min(minN,i);
        return;
    }else if(N < 0){
        return;
    }
    
    i++;
    
    
    recruit(N-1,i);
    recruit(N-2,i);
    recruit(N-5,i);
    recruit(N-7,i);
    
}

int main(){
    
    
    int N;
    std::cin >>N;
    
    int i = 0;
    
    recruit(N, i);
    
    std::cout << minN;
    
}
*/

