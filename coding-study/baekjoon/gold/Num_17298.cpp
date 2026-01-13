#include <iostream>
#include <vector>
#include <stack>

int main(void)
{
    int N;

    std::cin >> N;

    if(N == 1) 
    {
        std::cout << "-1";
        return 0; 
    }

    std::vector<int> arr(N,0);
    std::vector<int> result(N,-1);

    std::stack<int> st;

    for(int i =0;i<N;i++)
    {
        std::cin >> arr[i];
    }

    for(int i =0;i<N;i++){
        
        while(!st.empty() && arr[i] > arr[st.top()])
        {
            result[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    for(int i =0;i<N;i++)
    {
        std::cout << result[i] << " ";
    }

    return 0;
}