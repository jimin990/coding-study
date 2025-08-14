#include <iostream>
#include <unordered_set>
#include <string>

int main(void){

    int M;

    std::cin >> M;

    std::string str;

    int x;

    std::unordered_set<int> set;

    for(int i =0;i<M;i++){

        std::cin >> str;

        if(str == "add"){

            std::cin >> x;
            set.insert(x);

        }else if(str == "remove"){
            std::cin >> x;
            set.erase(x);
        }else if(str == "check"){
            std::cin >> x;
            std::cout << set.find(x);
        }else if(str == "toggle"){
            
        }else if(str == "all"){

        }else{

        }

    }
    return 0;
}