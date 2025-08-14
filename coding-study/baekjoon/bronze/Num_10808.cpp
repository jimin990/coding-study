#include <iostream>
#include <string>
#include <vector>

int main(void){

    std::string str;

    std::getline(std::cin,str);

    std::vector<int> vec(26,0);

    for(int i=0;i<str.size();i++){

        vec[str[i]-97]++;
    }

    for(int i=0;i<26;i++){

        std::cout << vec[i] << " ";
    }

    return 0;
}