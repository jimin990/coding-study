    #include <iostream>
    #include <utility>
    #include <vector>
    #include <algorithm>
    #include <queue>

    int main(void){

        std::ios::sync_with_stdio(false);
        std::cin.tie(NULL);

        int N,K;

        std::cin >> N >> K;

        std::vector<std::pair<int,int>> jewel;

        for(int i =0;i<N;i++){
            int M,V;

            std::cin >> M >> V;

            jewel.push_back({M,V});
        }

        std::vector<int> bag;

        for(int i =0;i< K;i++){
            int C;

            std::cin >> C;

            bag.push_back(C);
        }

        std::sort(bag.begin(),bag.end());
        std::sort(jewel.begin(),jewel.end());

        long long max_steal = 0;

        std::priority_queue<int> pq;

        int idx = 0;

        for(int i =0;i<K;i++){

            int weight = bag[i];

            while(idx < N && jewel[idx].first <= weight){
                pq.push(jewel[idx].second);
                idx++;
            }

            if(!pq.empty()){
                max_steal+=pq.top(); pq.pop();
            }
        }

        std::cout << max_steal;
        
        return 0;
    }