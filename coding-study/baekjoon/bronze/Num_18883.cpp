#include <iostream>

int main(void){


    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;

    std::cin >> N >> M;

    int num = 0;

    for(int i =0;i<N;i++){

        for(int j = 0;j<M-1;j++){
            
            std::cout << ++num << " ";

        }

        std::cout << ++num << "\n";
    }

    return 0;
}