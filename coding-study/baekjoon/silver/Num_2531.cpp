#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,d,k,c;

    std::cin >> N >> d >> k >> c;

    std::vector<int> rail;

    for(int i =0;i<N;i++){

        int sushi;

        std::cin >> sushi;

        rail.push_back(sushi);
    }

    int st = 0, en = k-1, max_tmp = 0;

    std::unordered_map<int,int> type;

    for(int i =0;i<k;i++){
        
        if(type.find(rail[i]) == type.end()){
            type.insert({rail[i],1});
        }else{
            type[rail[i]]++;
        }
        
    }

    if(type.find(c) == type.end()){
            max_tmp = type.size() + 1;
    }else{
            max_tmp = type.size();
    }
    
    if(max_tmp == d){

        std::cout << max_tmp;
        return 0;
    }

    while(st < N){

        if(type[rail[st]] >= 2){
            type[rail[st]]--;
        }else{
            type.erase(rail[st]);
        }

        st++;

        en++;
        en = (en%N);

        if(type.find(rail[en]) == type.end()){
            type.insert({rail[en],1});
        }else{
            type[rail[en]]++;
        }

        int size = type.size();

        if(type.find(c) == type.end()){
            max_tmp = std::max(max_tmp,size + 1);
        }else{
            max_tmp = std::max(max_tmp,size);
        }

    }

    std::cout << max_tmp;

    return 0;
}