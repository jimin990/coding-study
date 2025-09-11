#include <iostream>
#include <string>
#include <algorithm>

int main(void){

    int N;

    std::string str,left,right;

    std::cin >> N >> str;

    left = str.substr(0,str.find('*'));
    right = str.substr(str.find('*')+1);

    for(int i =0;i<N;i++){

        std::string tmp;

        std::cin >> tmp;

        int find1 = tmp.find(left);
        int find2 = tmp.rfind(right);

        if(find1 == 0 && (find2 + right.size() == tmp.size()) && (left.size() + right.size()) <= tmp.size()){
            std::cout << "DA";
        }else{
            std::cout << "NE";
        }

        std::cout << "\n";

    }

    return 0;
}
