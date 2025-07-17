#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    int* arr = new int[N+1];

    std::vector<std::vector<int>> arr1(N+1,std::vector<int>(3,0));

    arr[0] = 0;

    for(int i =1;i<=N;i++){
        std::cin >> arr[i];
    }

    arr1[1][0] = 0;
    
    for(int i =1;i<3;i++){
        
        arr1[1][i] = arr[1];
    }
    
    for(int i =2;i<=N;i++){

        arr1[i][0] = std::max(arr1[i-1][1],arr1[i-1][2]);
        arr1[i][1] = arr[i] + arr1[i-1][0];
        arr1[i][2] = arr[i] + arr1[i-1][1];
    }

    std::cout << std::max(arr1[N][1],arr1[N][2]);

    return 0;
}