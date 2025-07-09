#include <iostream>
#include <string>

int main(void){
    
    std::string str;
    
    int order = 1;
    
    std::getline(std::cin,str);
    
    
    while(str != "Was it a cat I saw?"){
        for(int i =0;i<str.length();i+=order+1){
            std::cout << str[i];
        }
        
        std::cout << "\n";
        
        std::getline(std::cin,str);
        
        order++;
        
    }
    
    return 0;
}
