#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

    int n;
    std::cin >> n;

    std::vector<int> vec(n);

    for(int i =0;i<n;i++){
        
        std::cin >> vec[i];

    }

    int x,count =0;

    std::cin >> x;

    std::sort(vec.begin(),vec.end());

    int left = 0, right = n-1;

    int sum;

    while(left < right){
        
        sum = vec[left] + vec[right];

        if(sum == x){

            if(left != right){
                count++;
            }

            right--;

        }else if(sum < x){
            left++;
        }else{
            right--;
        }
    }

    std::cout << count;
    return 0;
}