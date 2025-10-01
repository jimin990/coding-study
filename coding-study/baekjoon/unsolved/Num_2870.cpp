#include <iostream>
#include <set>
#include <string>
#include <cctype>
#include <algorithm>

int main(void){

    int M;

    std::cin >> M;

    std::set<int> s;

    for(int i =0;i<M;i++){

        std::string str;

        std::cin >> str;

        std::string num = "";

        for(char c : str){

            if(std::isdigit(c)){
                num += c;
                
            }else{
                if(!num.empty()){
                    s.insert(std::stoi(num));
                    num.clear();
                }
            }
        }

        if(!num.empty()){
            s.insert(std::stoi(num));
        }
    }

    for(int i : s){
        std::cout << i << "\n";
    }
    
    return 0;
}