#include <iostream>
#include <vector>
#include <string>

int main(void){

    int N;

    std::cin >> N;

    std::string str1,str2;

    while(N--){

        bool status = true;

        std::cin >> str1 >> str2;
        
        std::vector<int> vec(26,0);

        for(int i=0;i<str1.size();i++){
            vec[str1[i]-97]++;
        }

        for(int i =0;i<str2.size();i++){
            vec[str2[i]-97]--;
        }

        for(int i =0;i<26;i++){

            if(vec[i] != 0){
                status = false;
                break;
            }
        }

        if(status){
            std::cout << "Possible\n";
        }else{
            std::cout << "Impossible\n";
        }
    }

    return 0;
}