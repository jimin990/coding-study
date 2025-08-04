#include <iostream>
#include <algorithm>
#include <vector>

int main(void){

    int M,N;

    std::cin >> M >> N ;

    std::vector<int> arr;

    int input;
    for(int i=0;i<N;i++){

        std::cin >> input;
        arr.push_back(input);
    }

    std::sort(arr.begin(),arr.end());

    int result = 0,count = 0;

    int left = 1,right = arr[N-1],mid;
    

    while(left<=right){


        count = 0;

        mid = left + (right - left) / 2;

        for(int i =0;i<N;i++){
            count += (arr[i] / mid);
            
        }

        if(count >= M){
            result = mid;
            left = mid + 1;
        }else{
            right = mid -1;
        }
    }
    

    std::cout << result;

    return 0;
}
