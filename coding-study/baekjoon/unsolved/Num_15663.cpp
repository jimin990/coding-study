#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int N, M;

int ans[10];

bool visited[10];

void back(int num ,std::vector<int> &v){

    if(num = M)
    {
        for(int i =0;i<M;i++)
        {
            std::cout << ans[i] << " ";            
        }

        std::cout << "\n";

        return;
    }

    for(int i =0;i<M;i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            ans[num] = v[i];
            back(num+1 ,v);
            visited[i] = false;
        }
    }

}

int main(void){

    std::cin >> N >> M;

    std::set<int> s;

    std::vector<int> v;

    for(int i = 0;i<N;i++)
    {
        int index;

        std::cin >> index;

        if(s.find(index) == s.end())
        {
            s.insert(index);
            v.push_back(index);
        }

    }

    std::sort(v.begin(),v.end());

    back(0,v);

    return 0;
}