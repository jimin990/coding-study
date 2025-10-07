#include <iostream>
#include <string>

int main(void){

    while(true){
        std::string str;

        int age, weight;

        std::cin >> str >> age >> weight;

        if(str == "#" && age == 0 && weight == 0){
            break;
        }

        if(age > 17 || weight >= 80){

            std::cout << str << " " << "Senior" << "\n";
        }else{
            std::cout << str << " " << "Junior" << "\n";
        }

    }
    

    return 0;
}