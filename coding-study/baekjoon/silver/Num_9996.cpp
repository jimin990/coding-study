#include <iostream>
#include <string>
#include <algorithm>

int main(void){

    int N;

    std::string str,left,right;

    std::cin >> N >> str;

    left = str.substr(0,str.find('*'));
    right = str.substr(str.find('*')+1);

    std::reverse(right.begin(),right.end());

    //std::cout << left << "\n" << right;

    for(int i =0;i<N;i++){

        std::string tmp,tmp_rev;

        std::cin >> tmp;

        tmp_rev = tmp;

        std::reverse(tmp_rev.begin(),tmp_rev.end());

        int find1 = tmp.find(left);
        int find2 = tmp_rev.find(right);

        if(find1 == 0 && find2 == 0 && (left.size() + right.size()) <= tmp.size()){
            std::cout << "DA";
        }else{
            std::cout << "NE";
        }

        std::cout << "\n";

    }

    return 0;
}
