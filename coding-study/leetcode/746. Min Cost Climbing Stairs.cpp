#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
        
//         std::vector<int> arr;

    

//         for(int i =2;i<cost.size();i++){
//             arr[i] = std::min(cost[i-1,cost[i-2]]);
//         }

//         std::cout << std::min(arr[arr.size()],arr[arr.size()-1]);
//     }
// };

int main(void){

    std::vector<int> cost = { 1 ,100, 1 ,1, 1 ,100, 1 , 1 ,100, 1 };

    //std::vector<int> arr(cost.size(),0);

    for(int i =2;i<cost.size();i++){
        cost[i] += std::min(cost[i-1] ,cost[i-2]);
    }

    std::cout << std::min(cost[cost.size()-1],cost[cost.size()-2]);

    return 0;
}