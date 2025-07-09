//
//  Num_9094.cpp
//  coding-test
//
//  Created by 김지민 on 6/20/25.
//

#include <iostream>

int main(void){
    int T , n , m;
    std::cin >> T;
    
    while(T--){
        std::cin >> n >> m;
        int count = 0;
        
        for(int a = 1; a < n; a++){
            for(int b = a + 1; b < n; b++){
                int numerator = a*a + b*b + m;
                int denominator = a * b;
                if(numerator % denominator == 0){
                    count++;
                }
            }
        }
        std::cout << count << "\n";
    }
    
    return 0;
}
