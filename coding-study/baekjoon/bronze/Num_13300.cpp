#include <iostream>
#include <vector>

int main(void){

    int N,K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> arr(7,std::vector<int>(2,0));

    for(int i =0;i<N;i++){
        int S,Y;
        std::cin >> S >> Y;

        arr[Y][S]++;

    }

    int sum = 0;

    for(int i = 1;i<7;i++){
        if((arr[i][0] % K) == 0){
            sum += arr[i][0] / K;
        }else{
            sum += arr[i][0] / K + 1;
        }

        if((arr[i][1] % K) == 0){
            sum += arr[i][1] / K;
        }else{
            sum += arr[i][1] / K + 1;
        }
    }

    std::cout << sum;
    return 0;
}