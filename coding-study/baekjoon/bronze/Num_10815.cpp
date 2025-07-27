#include <iostream>
#include <set>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,input;
    std::cin >> N;

    std::set<int> set;

    for(int i=0;i<N;i++){

        std::cin >> input;

        set.insert(input);
    }

    std::cin >> N;

    for(int i = 0;i<N;i++){
        std::cin >> input;

        if(set.find(input) != set.end()){
            std::cout << 1 << " ";
        }else{
            std::cout << 0 << " ";
        }
    }
    
    return 0;
}