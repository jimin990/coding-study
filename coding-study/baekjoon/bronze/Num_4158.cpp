#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    while(true){

        int N, M, count = 0;

        std::cin >> N >> M;

        if(N == 0 && M == 0) break;

        std::vector<int> arr(N,0);

        for(int i =0;i<N;i++){

            std::cin >> arr[i];
        }

        for(int i=0;i<M;i++){
            int num;

            std::cin >> num;

            if(std::binary_search(arr.begin(), arr.end(),num)){
                count++;
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}
