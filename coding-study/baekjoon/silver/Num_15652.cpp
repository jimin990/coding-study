#include <iostream>

int N,M;
int arr[10];

void func(int t, int num){

    if(num == M){

        for(int i=0;i<M;i++){
            std::cout << arr[i] << " ";
        }

        std::cout << "\n";

        return;
    }

    for(int i = t;i<=N;i++){

        arr[num] = i;

        func(i,num+1);
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N >> M;

    func(1,0);

    return 0;
}