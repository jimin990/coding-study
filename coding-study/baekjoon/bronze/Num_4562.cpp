#include <iostream>

int main(void){

    int n;

    std::cin >> n;

    while(n--)
    {

        int x, y;

        std::cin >> x >> y;

        std::cout << (x >= y ? "MMM BRAINS" : "NO BRAINS") << "\n"; 
    }

    return 0;
}