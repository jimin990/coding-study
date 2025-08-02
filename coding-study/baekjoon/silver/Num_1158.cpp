#include <iostream>
#include <vector>

int main(void){

    int N,K;

    std::cin >> N >> K;

    std::vector<int> vec;

    for(int i =1; i <= N;i++){

        vec.push_back(i);
    }

    std::cout << "<";

    int index = 0;

    while(!vec.empty()){

        index = (index + K-1) % vec.size();
        if(vec.size() == 1){
            std::cout << vec[index] << ">" ;
        }else{
            std::cout << vec[index] << ", " ;
        }
        vec.erase(vec.begin() + index);    
        
    }

    return 0;
}