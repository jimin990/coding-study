//
//  Num_1076.cpp
//  coding-test
//
//  Created by 김지민 on 5/22/25.
//

/**
 black    0    1
 brown    1    10
 red    2    100
 orange    3    1,000
 yellow    4    10,000
 green    5    100,000
 blue    6    1,000,000
 violet    7    10,000,000
 grey    8    100,000,000
 white    9    1,000,000,000
 */
    #include <iostream>
    #include <string>
    #include <map>

    int main(){
        
        std::string first, second, third;
        
        std::cin>> first >> second >> third;
        
        std::map<std::string,int> mp;
        
        mp.insert({"black",0});
        mp.insert({"brown",1});
        mp.insert({"red",2});
        mp.insert({"orange",3});
        mp.insert({"yellow",4});
        mp.insert({"green",5});
        mp.insert({"blue",6});
        mp.insert({"violet",7});
        mp.insert({"grey",8});
        mp.insert({"white",9});
        
        
        long n =(mp.at(first) * 10) + mp.at(second);;
        
        for(int i=0;i<mp.at(third);i++){
            n *= 10;
        }
        
        std::cout << n;
        
        return 0;
    }
