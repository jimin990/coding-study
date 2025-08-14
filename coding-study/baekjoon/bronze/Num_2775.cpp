#include <iostream>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    std::cin >> T;

    int N = 15;

    std::vector<std::vector<int>> arr(N,std::vector<int>(N));

    for(int i =0;i<N;i++){

        arr[0][i] = i+1;

    }

    for(int i =1;i<N;i++){

        int sum = 0;
        
        for(int j=0;j<N;j++){

            sum+=arr[i-1][j];
            arr[i][j] = sum;
        }
    }

    for(int i =0;i<T;i++){
        int k,n;

        std::cin >> k >> n;

        std::cout << arr[k][n-1] << "\n";
    }

    return 0;
}