#include <iostream>
#include <unordered_set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;

    std::unordered_set<int> used;
    int sum = 0;

    for (int i = 0; i < N - 1; i++) {
        std::cout << i << " ";
        used.insert(i);
        sum += i;
    }

    int i = N - 1;
    while (true) {
        int avg = (sum + i) / N;
        if ((sum + i) % N == 0 && used.count(i) == 0 && used.count(avg) == 0 && i != avg) {
            std::cout << i << " " << avg << "\n";
            break;
        }
        i++;
    }

    return 0;
}
