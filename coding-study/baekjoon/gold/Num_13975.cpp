#include <iostream>
#include <queue>
#include <vector>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    std::cin >> T;

    for(int i =0;i<T;i++){

        int K;

        std::cin >> K;

        std::priority_queue<long long,std::vector<long long>,std::greater<long long>> pq;

        for(int j=0;j<K;j++){
            long long num;

            std::cin >> num;

            pq.push(num);
        }

        long long total = 0;

        while(pq.size() != 1){
            long long sum =0;
            sum += pq.top(); pq.pop();
            sum += pq.top(); pq.pop();

            pq.push(sum);

            total+=sum;
        }

        std::cout << total << "\n";

    }

    return 0;
}
