//
//  Num_12437.cpp
//  coding-test
//
//  Created by 김지민 on 6/10/25.
//

#include <iostream>

int main(void){
    
    int T,m,d,w;
    
    std::cin >> T;
    
    for(int i = 1;i<=T;i++){
        
        int result = 0, tmp = 0,sum;
        std::cin >> m >> d >> w;
        
        for(int j =0;j<m;j++){
            
            sum = (d+tmp)/w;
            
            if((d+tmp) % w != 0){
                sum+=1;
            }
            
            tmp=(d+tmp) - (w * ( (d+tmp)/w) );
            
            result +=sum;
        }
     
        std::cout << "Case #" << i << ": " << result << "\n";
    }
    
    return 0;
}
