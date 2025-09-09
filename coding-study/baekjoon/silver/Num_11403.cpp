#include <iostream>
#include <vector>
#include <queue>

int main(void){ 

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;

    std::cin >> N;

    std::vector<std::vector<int>> v(N,std::vector<int>(N,0));

    std::vector<std::vector<int>> tmp(N,std::vector<int>(N,0));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            std::cin >> v[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j =0;j<N;j++){
         
            if(v[i][j] == 1){

                std::vector<bool> c(N,false);

                std::queue<int> que;

                que.push(i);

                int root = i;

                while(!que.empty()){

                    int t = que.front(); que.pop();

                    for(int l = 0;l<N;l++){
                        if(v[t][l] == 1 && !c[l]){
                            
                            c[l] = true;
                            
                            que.push(l);

                            tmp[root][l] = 1;
                        }
                    }

                }
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j =0;j<N;j++){
            std::cout << tmp[i][j] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}