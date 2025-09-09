#include <iostream>

int N,M;

int arr[10];
bool isused[10];

void back(int num){

    if(num == M){

        for(int i = 0;i<M;i++){
            std::cout << arr[i] << " ";
        }

        std::cout << "\n";

        return;
    }

    for(int i =1;i<=N;i++){

        if(!isused[i]){
            
            arr[num] = i;
            isused[i] = true;
            back(num + 1);
            isused[i] = false;
        }
    
    }
}



int main(void){

    std::cin >> N >> M;

    back(0);

    return 0;
}