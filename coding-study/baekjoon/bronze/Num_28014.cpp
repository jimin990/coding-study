#include <iostream>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;

    int count  = 1;

    std::cin >> N;

    std::vector<int> arr(N);

    for(int i =0;i<N;i++){

        if(i ==0){
            std::cin >> arr[i];
        }else{
            std::cin >> arr[i];

            if(arr[i-1] <= arr[i]){
                count++;
            }
        }
    }

    std::cout << count;

    return 0;
}