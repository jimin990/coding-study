#include <iostream>
#include <vector>
#include <algorithm>

int DP(std::vector<int> &subsequence,std::vector<int> &Lis, int n){

    int max = 1;

    for(int k=0;k<n;k++){

        Lis[k] = 1;

        for(int i=0;i<k;i++){
            if(subsequence[i] < subsequence[k]){
                Lis[k] = std::max(Lis[k],Lis[i] + 1);

                max = std::max(Lis[k],max);
            }
        }
    }

    return max;

}

int main(void){

    int n;

    std::cin >> n;

    std::vector<int> A(n,1);

    std::vector<int> Lis(n,1);

    for(int i =0;i<n;i++){

        std::cin >> A[i];

    }
    
    std::cout << DP(A,Lis,n);
    
    return 0;
}