#include <iostream>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    int a, b, c;

    int max0=0, max1=0, max2=0;
    int min0=0, min1=0, min2=0;

    for(int i=0;i<N;i++)
    {
        std::cin >> a >> b >> c;

        int newMax0 = std::max(max0, max1) + a;
        int newMax1 = std::max({max0, max1, max2}) + b;
        int newMax2 = std::max(max1, max2) + c;

        int newMin0 = std::min(min0, min1) + a;
        int newMin1 = std::min({min0, min1, min2}) + b;
        int newMin2 = std::min(min1, min2) + c;

        max0 = newMax0;
        max1 = newMax1;
        max2 = newMax2;

        min0 = newMin0;
        min1 = newMin1;
        min2 = newMin2;
    }

    std::cout << std::max({max0, max1, max2}) << " ";
    std::cout << std::min({min0, min1, min2});
}