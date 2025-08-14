#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>

int main(void){

    
    int n;

    std::cin >> n;

    std::string name, log;

    std::unordered_set<std::string> set;

    for(int i =0;i<n;i++){

        std::cin >> name >> log;

        if(log == "enter"){
            set.insert(name);
        }else{
            set.erase(name);
        }
        
    }
    
    std::vector<std::string> vec(set.begin(),set.end());

    std::sort(vec.rbegin(),vec.rend());

    for(std::string str : vec){
        std::cout << str << "\n";
    }

    return 0;
}