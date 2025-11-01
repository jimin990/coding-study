#include <iostream>

int main(void){

    int T;

    std::cin >> T;

    for(int i =0;i<T;i++)
    {
        int V, E;

        std::cin >> V >> E;

        std::cout << 2 - V + E << "\n"; 
    }

    return 0;
}