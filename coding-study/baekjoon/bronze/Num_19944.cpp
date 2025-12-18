#include <iostream>

int main(){
    
    int n, m;
    
    std::cin >> n >> m;
    
    if(m > n){
        std::cout << "TLE!";
    }
    else if((n >= m) && (m != 1) && (m != 2)){
        std::cout << "OLDBIE!";
    }else{
        std::cout << "NEWBIE!";
    }
    
    return 0;
}
