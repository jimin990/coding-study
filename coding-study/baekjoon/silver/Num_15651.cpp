#include <iostream>

int N, M;

int arr[10];

void func(int num){

    if(num == M){

        for(int i=0;i<M;i++){
            std::cout << arr[i] << " ";
        }

        std::cout << "\n";

        return;
    }

    for(int i =1;i<=N;i++){

        arr[num] = i;
        func(num+1);
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N >> M;

    func(0);

    return 0;
}