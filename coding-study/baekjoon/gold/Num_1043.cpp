#include <iostream>
#include <vector>

std::vector<int> parent;

int find(int a)
{
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a]);
}

void unite(int a1, int a2)
{
    a1 = find(a1);
    a2 = find(a2);
    if (a1 == a2) return;

    parent[a2] = a1;
}

int main(void)
{
    int N, M;

    std::cin >> N >> M;

    parent.resize(N);

    for(int i =0;i<N;i++)
    {
        parent[i] = i;
    }

    int truth_num;

    std::cin >> truth_num;

    if(truth_num == 0)
    {
        std::cout << M;
        return 0;
    }

    std::vector<int> truth_peoples(truth_num);

    for(int i =0;i<truth_num;i++)
    {  
        int truth_people;
        std::cin >> truth_people;
        
        truth_people--;

        truth_peoples[i] = truth_people;
    }

    for(int i =0;i<truth_num;i++)
    {
        unite(truth_peoples[i],truth_peoples[0]);
    }

    std::vector<std::vector<int>> party(M);

    for(int i =0;i<M;i++)
    {
        int num;

        std::cin >> num;

        for(int j=0;j<num;j++)
        {
            int people;

            std::cin >> people;

            people--;

            party[i].push_back(people);

            unite(party[i][j],party[i][0]);
        }
    }

    int count = 0;

    for(int i = 0;i<M;i++)
    {
        if(find(party[i][0]) != find(truth_peoples[0])) count++;
    }

    std::cout << count;

    return 0;
}