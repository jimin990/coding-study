#include <iostream>
#include <map>
#include <string>

int main(void){

    std::map<std::string,int> m;

    int N;

    std::cin >> N;

    for(int i =0;i<N;i++){
        std::string str;

        std::cin >> str;

        m.insert({str,1});
    }

    for(int i =0;i<N-1;i++){
        std::string str;

        std::cin >> str;

        m.erase(str);
    }

    for (const auto& pair : m) {
        std::cout << pair.first;
    }   

    return 0;
}