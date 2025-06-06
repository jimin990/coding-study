#include <iostream>

int main() {

    int arr[31];

    arr[0] = 0;

    for (int i = 1; i < 31; i++) {
        arr[i] = 0;
    }

    int n;
    for (int i = 1; i <= 28; i++) {
        std::cin >> n;
        arr[n] = 1;
    }

    for (int i = 1; i < 31; i++) {

        if (arr[i] == 0) {
            std::cout << i << "\n";
        }
    }
    return 0;
}