//
//  Num_10828.cpp
//  coding-test
//
//  Created by 김지민 on 5/21/25.
//

/**
 시간 제한    메모리 제한    제출    정답    맞힌 사람    정답 비율
 0.5 초 (추가 시간 없음)    256 MB    297896    112614    81510    38.495%
 문제
 정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

 명령은 총 다섯 가지이다.

 push X: 정수 X를 스택에 넣는 연산이다.
 pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 size: 스택에 들어있는 정수의 개수를 출력한다.
 empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
 top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */
#include <iostream>
#include <string>
#include <stack>

int main(){
    
    std::stack<int> stack;
    
    int N;
    std::cin >> N;
    
    std::string str;
    
    for(int i = 0;i<N;i++){
        
        std::cin >> str;
        
        int X;
        if(!str.compare("push")){
            
            std::cin >> X;
            
            stack.push(X);
            
            std::cout << X;
        }else if(str == "pop"){
            
            if(stack.empty()){
                X = -1;
            }else{
                X = stack.top();
                stack.pop();
            }
            
            std::cout << X;
        }

    }
    
    return 0;
}
