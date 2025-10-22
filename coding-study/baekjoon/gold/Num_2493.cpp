#include <iostream>
#include <vector>
#include <stack>

int main(void){

    int N;

    std::cin >> N;

    std::vector<int> arr(N,0);
    std::vector<int> ans(N,0);
    
    std::stack<int> v;

    

    for(int i =0;i<N;i++){

        std::cin >> arr[i];

        while(!v.empty() && (arr[v.top()] < arr[i])) v.pop();

        if(!v.empty()) ans[i] = v.top() + 1;

        v.push(i);

    }

    for(int i=0;i<N;i++)
    {
        std::cout << ans[i] << " ";
    }

    return 0;
}