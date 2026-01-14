#include <iostream>
#include <vector>
#include <queue>

int main(void)
{
    int K;

    std::cin >> K;


    for(int i =0;i<K;i++)
    {
        int V, E;

        std::cin >> V >> E;

        std::vector<std::vector<int>> graph(V);

        for(int j=0;j<E;j++)
        {
            int u, v;

            std::cin >> u >> v;

            u--, v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        std::queue<int> q;

        std::vector<int> color(V,-1);

        bool isResult = true;

        for(int j=0;j<V && isResult;j++)
        {
            if(color[j] == -1){
                
                color[j] = 1;
                q.push(j);

                while(!q.empty() && isResult)
                {
                    int p = q.front();
                    q.pop();

                    for(int l =0;l<graph[p].size();l++)
                    {
                        if(color[graph[p][l]] != -1 && color[graph[p][l]] == color[p])
                        {
                            isResult = false;
                            break;
                        }

                        if(color[graph[p][l]] == -1)
                        {
                            q.push(graph[p][l]);
                            if(color[p] == 1)
                            {
                                color[graph[p][l]] = 0;
                            } else
                            {
                                color[graph[p][l]] = 1;
                            }  
                        }
                    }
                }
            }            
        }

        if(isResult)
        {
            std::cout << "YES" << "\n";
        }else
        {
            std::cout << "NO" << "\n";
        }

    }

    return 0;
}