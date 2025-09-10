#include <iostream>
#include <vector>
#include <algorithm>

int N,M;

int arr[10];
bool isused[10];

void func(int s, int num,std::vector<int> &num_set){

    if(num == M){

        for(int i =0;i<M;i++){

            std::cout << arr[i] << " ";
        }

        std::cout << "\n";

        return;
    }

    for(int i =s;i<N;i++){
        if(!isused[i]){

            arr[num] = num_set[i];
            isused[i] = true;
            func(i+1,num+1,num_set);
            isused[i] = false;
        }
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N >> M;

    std::vector<int> num_set(N);

    for(int i =0;i<N;i++){
        std::cin >> num_set[i];
    }

    std::sort(num_set.begin(),num_set.end());

    func(0,0,num_set);

    return 0;
}