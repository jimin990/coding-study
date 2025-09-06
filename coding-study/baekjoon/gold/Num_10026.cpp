#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int BFS(int N, std::vector<std::vector<char>> &pic){

    std::vector<std::vector<bool>> visited(N,std::vector<bool>(N,false));

    std::queue<std::pair<int,int>> que;

    int count = 0;

    int x[4] = {0,1,0,-1};
    int y[4] = {-1,0,1,0};

    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){

            if(!visited[i][j]){

                count++;

                que.push({i,j});

                visited[i][j] = true;

                while(!que.empty()){

                    std::pair<int,int> p =  que.front(); que.pop();

                    for(int k = 0;k<4;k++){
                        int mx = p.first + x[k];
                        int my = p.second + y[k];

                        if(mx < 0 || mx >= N || my < 0 || my >= N) continue;
                        if(visited[mx][my] == false && pic[mx][my] == pic[p.first][p.second]){
                            visited[mx][my] = true;
                            
                            que.push({mx,my});
                        }
                    }

                }

            }
        }
    }

    return count;
}

int main(void){

    int N;

    std::cin >> N;

    std::vector<std::vector<char>> pic(N,std::vector<char>(N));
    
    std::vector<std::vector<char>> pic_c(N,std::vector<char>(N));

    for(int i =0;i<N;i++){
        std::string str;

        std::cin >> str;

        for(int j=0;j<N;j++){

            pic[i][j] = str[j];

            if(str[j] == 'R' || str[j] == 'G'){
                pic_c[i][j] = 'C';
            }else{
                pic_c[i][j] = str[j];
            }
        }
    }

    int npeople = BFS(N,pic);
    int cpeople = BFS(N,pic_c);

    std::cout << npeople << " " << cpeople;

    return 0;
}