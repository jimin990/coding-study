#include <iostream>
#include <stack>
#include <string>

int main(void){


    while(true){

        std::string str;

        std::getline(std::cin,str);

        std::stack<char> st;

        if(str == ".") break;

        bool status = true;

        for(int i =0;i<str.size();i++){
            
            if(str[i] == '('){
                st.push('(');
            }else if(str[i] == '['){
                st.push('[');
            }else if(str[i] == ')'){

                if(st.empty()){
                    status = false;
                    break;
                }

                char c = st.top();

                if('(' == c){
                    st.pop();
                }else{
                    status = false;
                    break;
                }
            }else if(str[i] == ']'){
                
                if(st.empty()){
                    status = false;
                    break;
                }

                char c = st.top();

                if('[' == c){
                    st.pop();
                }else{
                    status = false;
                    break;
                }
            }

        }

        if(status && st.empty()){
            std::cout << "yes\n";
        }else{
            std::cout << "no\n";
        }

    }

    return 0;
}