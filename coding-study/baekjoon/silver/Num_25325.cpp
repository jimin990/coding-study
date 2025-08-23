#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <vector>

#include <sstream>
#include <limits>   

int main(void){

    int n;
    std::string student_name,student_like;

    std::cin >> n;

    std::unordered_map<std::string,int> popul;

    for(int i =0;i < n;i++){

        std::cin >> student_name;

        popul.insert({student_name,0});

    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 버퍼 비우기

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, student_like);

    
        std::istringstream iss(student_like);
        std::string liked;
        while (iss >> liked) {
            popul[liked]++;
        }
    }
    

    std::vector<std::pair<std::string,int>> vec(popul.begin(),popul.end());
    
    std::sort(vec.begin(),vec.end(),[](std::pair<std::string,int> a, std::pair<std::string,int> b){
        if(a.second == b.second){
            return a.first < b.first;
        }else{
            return a.second > b.second;
        }
    });

    for(std::pair<std::string,int> tmp : vec){

        std::cout << tmp.first << " " << tmp.second << "\n";
    }

    return 0;
}