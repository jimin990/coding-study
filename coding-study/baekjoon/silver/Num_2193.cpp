#include <iostream>
#include <vector>

int main(void){

    int N;
    std::cin >> N;

    std::vector<long long> vec(N);

    vec[0] = 1;
    vec[1] = 1;

    for(int i =2;i<N;i++){
        vec[i] = vec[i-1] + vec[i-2];
    }

    std::cout << vec[N-1];
    return 0;
}