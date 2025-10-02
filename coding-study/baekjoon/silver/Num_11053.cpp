#include <iostream>
#include <vector>
#include <algorithm>

int BinarySearch(std::vector<int> &subsequence, int n){

    std::vector<int> lis;

    lis.push_back(subsequence[0]);

    int pos = 0;

    for(int i =0;i<n;i++){
        if(lis[pos] < subsequence[i]){
            lis.push_back(subsequence[i]);
            pos++;
        }else{
            int move = std::lower_bound(lis.begin(),lis.end(),subsequence[i]) - lis.begin();

            lis[move] = subsequence[i];
        }
    }

    return lis.size();

}

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

    std::cout << BinarySearch(A,n);
    
    return 0;
}