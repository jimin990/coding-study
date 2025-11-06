#include <iostream>
#include <string>

int main(void){

    std::string str;

    std::cin >> str;

    int ans = str.size();

    for(int i =0;i<str.size();i++){
        char c = str[i];

        if(c == ':'){
            ans+=1;
        }else if(c == '_'){
            ans+= 5;
        }
    }
   
    std::cout << ans;
    
    return 0;
}