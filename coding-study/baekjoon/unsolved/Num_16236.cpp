#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main(void){

    int N;

    std::cin >> N;

    int level = 2;

    int ex = level;

    int count = 0;

    int sum_len = 0;

    std::vector<std::vector<int>> arr(N,std::vector<int>(N));

    std::vector<std::vector<int>> len(N,std::vector<int>(N,0));

    std::vector<std::vector<bool>> visited(N,std::vector<bool>(N,false));

    std::queue<std::pair<int,int>> que;

    int x[4] = { -1, 0, 1, 0};
    int y[4] = {  0,-1, 0, 1};

    

    for(int i =0;i<N;i++){

        for(int j=0;j<N;j++){

            std::cin >> arr[i][j];

            if(arr[i][j] == 9){

                que.push({i,j});

                arr[i][j] = 0;

                visited[i][j] = true;

            }else if(arr[i][j] != 0 && arr[i][j] != 9){
                count++;
            }
        }
    }

    while(!que.empty()){

        std::pair<int,int> p = que.front(); que.pop();

        if(arr[p.first][p.second] !=0 && arr[p.first][p.second] < level){

            count--;

            ex--;

            if(ex == 0){
                level++;
                ex = level;
            }

            sum_len += len[p.first][p.second];

            len[p.first][p.second] = 0;

            que = std::queue<std::pair<int,int>>();
 
            visited = std::vector<std::vector<bool>>(N,std::vector<bool>(N,false));
            if(count == 0){
                break;
            }
        }

        for(int i =0;i<4;i++){

            int mx = p.first + x[i];
            int my = p.second + y[i];

            if(mx < 0 || mx >= N || my < 0 || my >=N) continue;
            if(arr[mx][my] <= level && !visited[mx][my]){
                que.push({mx,my});
                visited[mx][my] = true;
                len[mx][my] = len[p.first][p.second] + 1;

            }

        }

    }

    std::cout << "\n";

    for(int i =0;i<N;i++){

        for(int j=0;j<N;j++){

            std::cout <<len[i][j] << " ";
        }

        std::cout << "\n";
    }

    std::cout << sum_len;

    return 0;
}

