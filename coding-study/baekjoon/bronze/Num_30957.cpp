//
//  Num_30957.cpp
//  coding-test
//
//  Created by 김지민 on 6/5/25.
//

#include <iostream>
#include <cstring>
#include <algorithm> // std::max, std::max({})

int main() {
    int n, cnt[3] = {0};
    char BSA[10001];

    std::cin >> n;
    std::cin >> BSA;

    int len = std::strlen(BSA);
    for (int i = 0; i < len; i++) {
        if (BSA[i] == 'B') cnt[0]++;
        else if (BSA[i] == 'S') cnt[1]++;
        else if (BSA[i] == 'A') cnt[2]++;
    }

    if (cnt[0] == cnt[1] && cnt[1] == cnt[2])
        std::cout << "SCU";
    else {
        int max = std::max({cnt[0], cnt[1], cnt[2]});
        if (max == cnt[0]) std::cout << "B";
        if (max == cnt[1]) std::cout << "S";
        if (max == cnt[2]) std::cout << "A";
    }

    return 0;
}
