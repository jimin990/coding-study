#include <iostream>
#include <algorithm>
#include <vector>

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

    
    for(int i =0;i<n;i++){

        int  num = x - vec[i];
    
        int f = lower_bound(vec.begin(),vec.end(),num) - vec.begin();

        if(vec[f] + vec[i] == x && f != i){
            count++;
        }
    }

    std::cout << count/2;

    return 0;
}