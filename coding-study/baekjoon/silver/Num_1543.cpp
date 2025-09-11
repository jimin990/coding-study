#include <iostream>
#include <string>

int main(void){

    std::string str, str_find;

    std::getline(std::cin,str);

    std::getline(std::cin,str_find);

    bool status = true;

    int count = 0;

    while(status){

        if(str.find(str_find) == std::string::npos){
            status = false;
        }else{
            count++;

            int i = str.find(str_find);
            str = str.substr(i+str_find.size());
        }
    }

    std::cout << count;
    return 0;
}