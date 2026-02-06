#include <iostream>
#include <vector>

int main(void)
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, Q;

    std::cin >> N >> Q;

    std::vector<bool> visited(N+1,false);

    while(Q--)
    {
        int wish_ground;

        std::cin >> wish_ground;

        int cur = wish_ground;
        int first = 0;

        while(0 != cur)
        {
            if(visited[cur]) first = cur;

            cur /= 2;
        }

        if(first == 0) visited[wish_ground] = true;

        std::cout << first << "\n";
    }

    return 0;
}