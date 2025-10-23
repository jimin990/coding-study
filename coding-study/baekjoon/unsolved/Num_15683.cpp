#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

    int N,M;

    std::cin >> N >> M;

    std::vector<std::vector<int>> office(N,std::vector<int>(M,0));

    int min_count = M * N;

    for(int i =0;i<N;i++){
        for(int j=0;j<M;j++){

            std::cin >> office[i][j];

            if(office[i][j] != 0){
                min_count--;
            }
        }
    }


    for(int i =0;i<N;i++){
        for(int j=0;j<M;j++){

            if(office[i][j] != 0){
                if(office[i][j] == 1){

                    int left = 0,right=0,top = 0,under=0;

                    for(int k =j;k<M;k++){
                        if(office[i][k] == 6 && office[i][k] == 7){
                            break;
                        }else{
                            left++;
                        }
                    }

                    for(int k =j;k>=0;k--){
                        if(office[i][k] == 6 && office[i][k] == 7){
                            break;
                        }else{
                            right++;
                        }
                    }

                    for(int k =i;k<N;k++){
                        if(office[k][j] == 6 && office[k][j] == 7){
                            break;
                        }else{
                            under++;
                        }
                    }

                    for(int k =i;k>=0;k--){
                        if(office[k][j] == 6 && office[k][j] == 7){
                            break;
                        }else{
                            top++;
                        }
                    }


                    int max_num = std::max(left,std::max(right,std::max(top,under)));

                    if(max_num){}


                }
            }
        }
    }

    return 0;
}