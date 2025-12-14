#include <iostream>
#include <algorithm>

int main(void){

    int Soon, Korea, Han;

    std::cin >> Soon >> Korea >> Han;

    if((Soon + Korea + Han) >= 100){

        std::cout << "OK";
    }else{
        int min = std::min(Soon,std::min(Korea,Han));

        if(min == Soon){
            std::cout << "Soongsil";
        }else if(min == Korea){
            std::cout << "Korea";
        }else{
            std::cout << "Hanyang";
        }
    }
    return 0;
}