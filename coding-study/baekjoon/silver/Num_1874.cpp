#include <iostream>
#include <stack>
#include <string>

int main(void){

    int N,num = 0;

    std::string str;

    std::cin >> N;

    std::stack<int> st;

    //카운트 보다 작으면 + 크거나 같으면 - 

    int input;

    for(int i =1;i<=N;i++){
        std::cin >> input;

        if(st.empty() || st.top() < input ){
            while(st.empty() || st.top() != input){
                st.push(++num);
                str+= "+\n";
                if(num > N){
                    std::cout << "NO";
                    return 0;
                }
            }
        }
        
        if(!st.empty() && st.top() >= input){
            st.pop();
            str+= "-\n";
        }

    }

    std::cout << str;

    return 0;
}