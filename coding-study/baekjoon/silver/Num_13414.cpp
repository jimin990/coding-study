#include <iostream>
#include <unordered_map>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int K,L;
    std::string student_id;

    std::cin >> K >> L;
    std::unordered_map<std::string,int> course_registration;

    for(int i =1;i<=L;i++){

        std::cin >> student_id;

        course_registration[student_id] = i;
    }

    std::vector<std::pair<std::string,int>> vec(course_registration.begin(),course_registration.end());

    std::sort(vec.begin(),vec.end(),[](std::pair<std::string,int> x,std::pair<std::string, int> y){
        return x.second < y.second;
    });

    if(K > vec.size()) K = vec.size();

    for(int i =0;i<K;i++){
        std::cout << vec[i].first << "\n";
    }

    return 0;
}