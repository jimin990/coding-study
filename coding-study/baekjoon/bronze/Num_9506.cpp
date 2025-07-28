#include <iostream>

int main(void){

    
    int n;

    while(true){

        std::cin >> n;

        if( n == -1){
            return 0;
        }

        int sum = 0;

        std::cout << n << " "; 

        for(int i = 1; i< n;i++){
            if(n%i == 0){
                sum += i;
            }
        }

        if(n == sum){
            
            std::cout << "= 1";

            for(int i = 2; i< n;i++){
                if(n%i == 0){
                    std::cout << " + "<< i;
                }
            }   

            
        }else{
            std::cout << "is NOT perfect.";
        }

        std::cout << "\n";

    }

    return 0;
}