#include <iostream>

int main(void){

    std::string str;

    std::cin >> str;

    bool java_cpp[2] = {false, false};

    if(str[0] == '_' || str[str.size() - 1] == '_' || ('A' <= str[0] && str[0] <= 'Z')){
        std::cout << "Error!";
        return 0;
    }

    for(int i =0;i<str.size();i++){
        if('A' <= str[i] && str[i] <= 'Z') java_cpp[0] = true;
        if(str[i] == '_'){ 
            if(i+1 < str.size()){
                if(str[i+1] == '_'){
                    std::cout << "Error!";
                    return 0;
                }
            }

            java_cpp[1] = true;}
    }

    if(java_cpp[0] && java_cpp[1]){
        std::cout << "Error!";
        return 0;
    }

    if(java_cpp[0]){
        
        for(int i =0;i<str.size();i++){
            
            if('A' <= str[i] && str[i] <= 'Z'){
                str[i] = std::tolower(str[i]);
                str.insert(i,"_");
            }
        }

    }else if(java_cpp[1]){
        for(int i =0;i<str.size();i++){
            
            if(str[i] == '_'){
                str.erase(i,1);
                str[i] = std::toupper(str[i]);
            }
        }
    }

    std::cout << str;

    return 0;
}