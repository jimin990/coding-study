#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N, K;

    std::cin >> N >> K;

    std::vector<int> v(N,0);

    for(int i =0;i<N;i++)
    {
        std::cin >> v[i];
    }

    int max_S = 0;
    int odd = 0, even = 0;
    int le = 0, ri = 0;

    while(ri <N)
    {
        max_S = std::max(max_S,even);

        if(odd <= K)
        {
            if(v[ri]%2 == 0) even++; 
            else odd++;

            ri++;
        }else
        {
            if(v[le]%2 == 0) even--; 
            else odd--;

            le++;
        }
    }

    std::cout << max_S;

    return 0;
}