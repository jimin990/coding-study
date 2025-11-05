#include <iostream>
#include <iomanip>

int main(void) {
    int H, W;
    std::cin >> H >> W;
    
    double ans = (H * W) / 2.0;
    std::cout << std::fixed << std::setprecision(1) << ans;
    
    return 0;
}
