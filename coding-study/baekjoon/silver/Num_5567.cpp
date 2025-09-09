#include <iostream>
#include <vector>
#include <queue>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;

    std::cin >> n >> m;

    std::vector<std::vector<int>> list(n);

    std::vector<int> length(n,0);

    for(int i =0;i<m;i++){

        int a, b;

        std::cin >> a >> b;

        list[a-1].push_back(b-1);
        list[b-1].push_back(a-1);
    }

    int invite_list = 0;

    std::queue<int> q;

    q.push(0);

    length[0] = 1;

    while(!q.empty()){

        int t = q.front(); q.pop();

        for(int i =0;i<list[t].size();i++){

            if(length[list[t][i]] == 0){
                length[list[t][i]] = length[t] + 1;

                if(length[list[t][i]] <= 3) invite_list++;

                q.push(list[t][i]);
            }
        }
    }

    std::cout << invite_list;

    return 0;
}