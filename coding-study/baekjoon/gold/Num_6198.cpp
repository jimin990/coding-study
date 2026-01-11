#include <iostream>
#include <vector>
#include <stack>

int main(void)
{

    int N;

    std::cin >> N;

    long long answer = 0;

    std::vector<int> building(N,0);

    std::stack<int> st;

    for(int i = 0;i<N;i++)
    {
        std::cin >> building[i];
    }

    st.push(building[0]);

    for(int i = 1;i<N;i++)
    {
        
        while(!st.empty() && building[i] >= st.top())
        {
            st.pop();
        }
        
        answer+= st.size();

        st.push(building[i]);
    }

    std::cout << answer;

    return 0;
}