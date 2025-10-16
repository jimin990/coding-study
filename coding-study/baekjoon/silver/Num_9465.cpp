#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

    int T;

    std::cin >> T;

    for(int i =0;i<T;i++){

        int N;

        std::cin >> N;

        std::vector<std::vector<int>> arr(2,std::vector<int>(N,0));

        std::vector<std::vector<int>> arr_tmp(2,std::vector<int>(N,0));

        for(int j =0;j<N;j++){
            std::cin >> arr[0][j];
        }

        for(int j =0;j<N;j++){
            std::cin >> arr[1][j];
        }

        arr_tmp[0][0] = arr[0][0];
        arr_tmp[1][0] = arr[1][0];

        for(int j =1;j<N;j++){
            arr_tmp[0][j] = std::max(arr_tmp[0][j-1],(arr_tmp[1][j-1] + arr[0][j]));

            arr_tmp[1][j] = std::max(arr_tmp[1][j-1],(arr_tmp[0][j-1] + arr[1][j]));
        }

        int result = std::max(arr_tmp[0][N-1],arr_tmp[1][N-1]);

        std::cout << result << "\n";
    }

    return 0;
}