#include <iostream>
#include <string>

int main(void){

    std::string isbn;

    std::cin >> isbn;

    int damage_num = 0,damage_weight;

    for(int i =1;i<isbn.size();i++){
        
        int weight;

        if(i%2 == 0){
            weight = 3;
        }else{
            weight = 1;
        }

        if(isbn[i-1] == '*'){
            damage_weight = weight;
            continue;  
        }else{
            damage_num += ((isbn[i-1] - 48) * weight);
        }
        
    }

    int check_num = isbn[12] - 48;

    for(int i = 0;i<=10;i++){

        int sum = (damage_num + ((i * damage_weight))) % 10;

        int result;

        if(sum == 0){
            result = 0;
        }else{
            result = 10 - sum;
        }
        
        if(result == check_num){
            std::cout << i;
            return 0;
        }
    }

    return 0;
}