#include <iostream>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    long M;

    std::cin >> N >> M;

    std::vector<int> vec(N);

    for(int i=0;i<N;i++){
        std::cin >> vec[i];
    }

    int st = 0,en = 0,count =0;
    long sum = vec[0];
    
    while(en < N){

        if(sum >= M){
            if(sum == M){

                count++;
            } 
            
            sum-=vec[st];
            st++;
        }else{
            en++;
            sum+=vec[en];
        }

    }

    std::cout << count;


    return 0;
}