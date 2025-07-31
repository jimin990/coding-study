#include <iostream>
#include <queue>
#include <utility>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T,i;

    std::cin >> T;

    int x[8] = {-1,-2,1,2,-1,-2,1,2};
    int y[8] = {2,1,2,1,-2,-1,-2,-1};

    while(T--){

        std::cin >> i;

        std::queue<std::pair<int,int>> que;

        std::vector<std::vector<int>> arr(i,std::vector<int>(i,0));

        int cur_x,cur_y;
        std::cin >> cur_x >> cur_y;

        que.push({cur_x,cur_y});
        arr[cur_x][cur_y] = 1;

        while(!que.empty()){

            std::pair<int,int> que_pair = que.front();que.pop();

            for(int j =0;j<8;j++){
                int move_x = que_pair.first + x[j];
                int move_y = que_pair.second + y[j];


                if(move_x < 0 || move_x >= i || move_y <0 || move_y >= i) continue;
                if(arr[move_x][move_y] == 0){
                    
                    arr[move_x][move_y] = arr[que_pair.first][que_pair.second] + 1;
                    que.push({move_x,move_y});
                }
            }
        }

        int target_x,target_y;
        std::cin >> target_x >> target_y;

        std::cout << arr[target_x][target_y] - 1 << "\n";

    }
    
    return 0;
}