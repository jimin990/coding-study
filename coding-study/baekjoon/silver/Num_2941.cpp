#include <iostream>
#include <string>

int main(void){

    std::string str;
    
    std::cin >> str;

    std::string arr[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    for(int i =0;i<8;i++){
        while(str.find(arr[i]) != std::string::npos){
            str.replace(str.find(arr[i]),arr[i].length(),"2");
        }
    }

    std::cout << str.length();


    return 0;
}