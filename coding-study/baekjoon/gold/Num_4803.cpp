#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main(void)
{
    int t = 1;

    while(true)
    {
        int n, m;

        std::cin >> n >> m;

        if(n == 0 && m == 0) return 0;

        std::vector<std::vector<int>> tree(n);

        for(int i =0;i<m;i++)
        {
            int a, b;

            std::cin >> a >> b;
            a--, b--;

            tree[a].push_back(b);
            tree[b].push_back(a);
        }

        std::queue<std::pair<int,int>> q;
        std::vector<bool> visited(n, false);

        int count = 0;

        for(int i =0;i<n;i++)
        {
            bool iscycle = false;

            if(!visited[i])
            {
                q.push({i,-1});
                visited[i] = true;

                while(!q.empty())
                {
                    std::pair<int, int> f = q.front(); q.pop();

                    int cur = f.first;
                    int parent = f.second;

                    for(int j=0;j<tree[cur].size();j++)
                    {
                        if(!visited[tree[cur][j]])
                        {
                            q.push({tree[cur][j], cur});
                            visited[tree[cur][j]] = true;
                        }else if( visited[tree[cur][j]] && tree[cur][j] != parent)
                        {
                            iscycle = true;
                        }
                    }

            
                }

                if(!iscycle) count++;
            }

            
        }

        std::cout << "Case " << t << ": ";
        if(count  == 0)
        {
            std::cout << "No trees." << "\n";
        }else if(count == 1)
        {
            std::cout << "There is one tree." << "\n";
        }else{
            std::cout << "A forest of " << count << " trees." << "\n";
        }
        
        t++;
    }

    return 0;
}