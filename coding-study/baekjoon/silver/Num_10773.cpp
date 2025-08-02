#include <iostream>
#include <stack>

int main(void){
    
    int K, sum = 0;

    std::cin >> K;

    std::stack<int> st;

    for(int i =0;i<K;i++){

        int input;
        std::cin >> input;

        if(input == 0){
            st.pop();
        }else{
            st.push(input);
        }
    }

    while(!st.empty()){
        sum += st.top();
        st.pop();
    }

    std::cout << sum;
    
    return 0;
}