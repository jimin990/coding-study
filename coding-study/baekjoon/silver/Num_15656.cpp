#include <iostream>
#include <vector>
#include <algorithm>

int N,M;

int ans[10];

void back(int num,std::vector<int> &arr)
{

    if(num == M)
    {
        for(int i =0;i<M;i++)
        {
            std::cout << ans[i] << " ";
        }

        std::cout << "\n";
        return;
    }

    for(int i =0;i<N;i++)
    {
        ans[num] = arr[i];
        back(num+1,arr);
    }
}

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> N >> M;

    std::vector<int> arr(N,0);

    for(int i =0;i<N;i++){

        std::cin >> arr[i];
    }

    std::sort(arr.begin(),arr.end());

    back(0,arr);

    return 0;
}