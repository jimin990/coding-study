#include <iostream>
#include <algorithm>
#include <vector>

int N,M;

int ans[10];

bool visited[10];

void back(int num, std::vector<int> &arr){

    if(num == M){

        for(int i=0;i<M;i++)
        {
            std::cout << ans[i] << " ";
        }

        std::cout << "\n";

        return;
    }

    for(int i =0;i<N;i++){

        ans[num] = arr[i];

        if(num != 0 && ans[num-1] > ans[num]) continue;

        back(num+1,arr);
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> N >> M;

    std::vector<int> v(N,0);

    for(int i =0;i<N;i++){

        std::cin >> v[i];
    }

    std::sort(v.begin(),v.end());

    back(0,v);

    return 0;
}