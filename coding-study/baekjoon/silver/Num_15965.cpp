#include <iostream>
#include <vector>
int main() {

    int N;
    std::cin >> N;

    const int size = 100000000;

    std::vector<bool> primes(size, true);

    primes[0] = false;
    primes[1] = false;

    for (int i = 0; i * i < size; i++) {
        if (primes[i] == true) {
            for (int j = i * i; j < size; j += i) {
                primes[j] = false;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (primes[i] == true) {
            count++;

            if (count == N) {
                std::cout << i;
                return 0;
            }
        }
    }

    return 0;
}
