#include <iostream>
#include <vector>

int main(void){

    int N;

    std::cin >> N;

    int len = 4000001;

    std::vector<int> arr1(len+1, 1);

    arr1[0] = 0;
    arr1[1] = 0;

    for (int i = 2; i * i <= len; i++) {
        if (arr1[i] == 1) {
            for (int j = i * i; j <= len; j += i) {
                arr1[j] = 0;
            }
        }
    }

    std::vector<int> arr;
    for (int i = 2; i <= len; i++) {
        if (arr1[i] == 1) {
            arr.push_back(i);
        }
    }

    int le = 0, ri = 0;

    int sum = arr[0];

    int count = 0;

    while(arr[le] <= N && arr[ri] <= N ){
        if(sum == N){

            count++;

            ri++;

            if(ri >= arr.size()){
                break;
            }

            sum+=arr[ri];
        }else if(le == ri){
            
            ri++;

            if(ri >= arr.size()){
                break;
            }

            sum+=arr[ri];
        }else if(sum < N){
            ri++;

            if(ri >= arr.size()){
                break;
            }

            sum+=arr[ri];
        }else if(sum > N){
            
            sum-=arr[le];
            le++;

            if(le >= arr.size()){
                break;
            }
        }
        
    }
    
    std::cout << count;

    return 0;
}