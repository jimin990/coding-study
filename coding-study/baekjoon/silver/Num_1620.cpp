#include <iostream>
#include <string>
#include <unordered_map>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N,M;

    std::string poketmon_name;

    std::cin >> N >> M;

    std::unordered_map<std::string,int> poketmon_encyclopedia_name;
    std::unordered_map<int,std::string> poketmon_encyclopedia_num;

    for(int i =1;i<=N;i++){

        std::cin >> poketmon_name;

        poketmon_encyclopedia_name.insert({poketmon_name,i});
        poketmon_encyclopedia_num.insert({i,poketmon_name});

    }

    for(int i =0;i<M;i++){

        std::cin >> poketmon_name;

        if(poketmon_encyclopedia_name.find(poketmon_name) == poketmon_encyclopedia_name.end()){
            std::cout << poketmon_encyclopedia_num[std::stoi(poketmon_name)];
        }else{
            std::cout << poketmon_encyclopedia_name[poketmon_name];
        }

        std::cout << "\n";
    }

    return 0;
}