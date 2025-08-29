#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <vector>

int main(void){
    
    int N;

    std::cin >> N;

    std::map<long,int> card;

    for(int i =0;i<N;i++){
        long c;

        std::cin >> c;

        card[c]++;
    }

    std::vector<std::pair<long,int>> vec(card.begin(),card.end());

    std::sort(vec.begin(),vec.end(),[](std::pair<long,int> p1, std::pair<long,int> p2){
        if(p1.second == p2.second){
            return p1.first < p2.first;
        }

        return p1.second > p2.second;
    });

    std::cout << vec[0].first;

    return 0;
}