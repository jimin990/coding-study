#include <iostream>
#include <string>
#include <map>

int main(){
    
    int N, overtime = 0;
    std::cin >> N;
    
    std::string name,ee;
    
    std::map<std::string,int> record;
    
    
    for(int i =0;i< N;i++){
        std::cin >> name >> ee;
        
        if(ee == "+"){
            if(record.find(name) == record.end()){
                record.insert({name,1});
            }else{
                record[name]++;
            }
            
            record.insert({name,1});
        }else if(ee == "-"){
            if(record.find(name) == record.end()){
                overtime++;
            }else{
                if(record[name] == 1){
                    record.erase(name);
                }else{
                    record[name]--;
                }
            }
        }
        
    }
    
    for(auto itr: record){
        
        overtime += itr.second;
    }
    
    std::cout << overtime;
    
    return 0;
}
