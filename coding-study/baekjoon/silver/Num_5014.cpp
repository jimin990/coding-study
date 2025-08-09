#include <iostream>
#include <vector>
#include <queue>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int F,S,G,U,D;
    std::cin >> F >> S >> G >> U >> D;

    //건물의 층수 : F
    //스타트 링크 위치: G
    //강호의 현재 위치 : S
    //위로 U층가는 버튼: U
    //아래로 D층가는 버튼 D;

    std::queue<int> que;

    F++;

    std::vector<int> tower(F,0);
    
    D = D * -1;

    int y[2] = {U,D}; 


    que.push(S);

    tower[S] = 1;
    
    while(!que.empty()){

        int cur_f = que.front();que.pop();

        for(int i=0;i<2;i++){

            int move_f = cur_f + y[i];

            if(move_f > F || move_f <= 0) continue;
            if(tower[move_f] == 0){
                que.push(move_f);
                tower[move_f] = tower[cur_f] + 1;
            }
        }
    }

    if(tower[G]==0){
        std::cout << "use the stairs";
    }else{
        std::cout << --tower[G];
    }

    return 0;
}