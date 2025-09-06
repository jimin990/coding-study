#include <iostream>
#include <string>
#include <stack>

int main(void){

    int N, count = 0;

    std::cin >> N;

    for(int i=0;i<N;i++){
        std::string str;

        std::cin >> str;

        std::stack<char> st;
        
        for(int j=0;j<str.size();j++){

            if(st.empty()){
                st.push(str[j]);
            }else{
                if(st.top() == str[j]){
                    st.pop();
                }else{
                    st.push(str[j]);
                }
            }
        }

        if(st.empty()){
            count++;
        }

    }

    std::cout << count;

    return 0;
}