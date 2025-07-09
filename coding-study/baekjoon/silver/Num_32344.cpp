#include <climits>
#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]){
    
    int R,C,N;
    std::cin >> R >> C >> N;
    
    int max[N+1][2];
    int min[N+1][2];
    
    for(int i =0; i < N+1; i++){
        max[i][0] = INT_MIN;
        max[i][1] = INT_MIN;
        min[i][0] = INT_MAX;
        min[i][1] = INT_MAX;
    }
    

    for(int i = 0; i < N; i++){
        
        int a,v,h;
        std::cin >> a >> v >> h;
        
        max[a][0] = std::max(max[a][0],v);
        max[a][1] = std::max(max[a][1],h);
        min[a][0] = std::min(min[a][0],v);
        min[a][1] = std::min(min[a][1],h);
        
    }
    
    long long result = 0;
    int num = N+1;
    
    for(int i = 1; i < N+1; i++){
        
        if(max[i][0] == INT_MIN){
            continue;
        }
        
        long long tmp = (long long)(max[i][0] - min[i][0] + 1) * (max[i][1] - min[i][1] + 1);
        
        if((result < tmp) || (result == tmp && num > i)){
            
            num = i;
            result = tmp;
        
        }
    }
        
    std::cout << num << " " << result;
        
    return 0;
}
