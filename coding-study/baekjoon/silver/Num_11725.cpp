#include <iostream>
#include <vector>
#include <queue>

int main(void){

    int N;

    std::cin >> N;

    std::vector<std::vector<int>> tree(N);

    std::vector<int> parents(N,-1);

    for(int i =0;i<N-1;i++){

        int x,y;

        std::cin >> x >> y;

        tree[x - 1].push_back(y-1);
        tree[y - 1].push_back(x-1);
    }

    parents[0] = 0;

    std::queue<int> que;

    que.push(0);

    while(!que.empty()){

        int i = que.front(); que.pop();

        for(int j = 0;j<tree[i].size();j++){
            if(parents[i] != tree[i][j]){
                parents[tree[i][j]] = i;
                que.push(tree[i][j]);
            }
        }

    }

    for(int i =1;i<N;i++){
        std::cout << parents[i] + 1<< "\n";
    }

    return 0;
}