//
//  Num_1406.cpp
//  coding-test
//
//  Created by 김지민 on 6/5/25.
//

#include <iostream>
#include <list>
#include <string>

int main(void){
    
    int N;
    std::string str;
    
    std::getline(std::cin,str);
    
    //std::cin.ignore();
    
    std::cin >> N;
    
    std::list<char> linked_list;
    
    for(int i =0;i< str.length();i++){
        
        linked_list.push_back(str[i]);
    }
    
    auto cursor = linked_list.end();

    char command, ch;
    
    /**
     L    커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
     D    커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
     B    커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
     삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
     P $    $라는 문자를 커서 왼쪽에 추가함
     */
    for(int i = 0;i < N;i++){
        std::cin >> command;
        
        if(command == 'L'){
            if(cursor != linked_list.begin()){
                cursor= std::prev(cursor);
            }
            
        }else if(command == 'D'){
            if(cursor != linked_list.end()){
                cursor= std::next(cursor);
            }
            
        }else if(command == 'B'){
            if(cursor != linked_list.begin()){
                
                linked_list.erase(std::prev(cursor));
            }
        }else if(command == 'P'){
            std::cin >> ch;
            
            linked_list.insert(cursor, ch);
        
        }
        
    }
    
    for(auto i = linked_list.begin(); i != linked_list.end();i++){
        std::cout << *i;
    }
    
    
    return 0;
}
