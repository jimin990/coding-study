#include <iostream>
#include <vector>

int N,M;

int x[4] = { 0,1, 0,-1};
int y[4] = {-1,0, 1, 0};

std::vector<std::vector<int>> room;

int count = 0;

bool status = true;

void DFS(int cx,int cy,int dir){

        if(room[cy][cx] == 0){
            room[cy][cx] = -1;
            count++;
        } 

        for(int i =0;i<4;i++){

            int pos = (dir+3-i+4)%4;

            int mx = cx + x[pos];
            int my = cy + y[pos];

            if(mx < 0 || mx >= M || my < 0 || my >= N) continue;
            if(room[my][mx] == 0){
            
                DFS(mx,my,pos);
                return;
            }
        }

        cx += x[(dir+2)%4];
        cy += y[(dir+2)%4];

        if (cx < 0 || cx >= M || cy < 0 || cy >= N) return;
        if(room[cy][cx] == 1) return;

        DFS(cx, cy, dir);
} 

int main(void){

    int r,c,d;

    std::cin >> N >> M;
    std::cin >> r >> c >> d;

    for(int i =0;i<N;i++){

        std::vector<int> rx(M);

        for(int j=0;j<M;j++){

            std::cin >> rx[j];
        }

        room.push_back(rx);
    }

    DFS(c,r,d);

    std::cout << count;

    return 0;
}