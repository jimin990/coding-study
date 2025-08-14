#include <iostream>
#include <set>
#include <string>

int main(void){

    int n;

    std::cin >> n;

    std::string name, log;

    std::set<std::string> set;

    for(int i =0;i<n;i++){

        std::cin >> name >> log;

        if(log == "enter"){
            set.insert(name);
        }else{
            set.erase(name);
        }
        
    }
    
   for(auto i = set.rbegin();i != set.rend();i++){
        std::cout << *i << "\n";
   }

    return 0;
}