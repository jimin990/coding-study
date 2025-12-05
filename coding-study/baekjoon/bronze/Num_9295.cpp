#include <iostream>

int main(void){

    int N;

    std::cin >> N;

    for(int i=1;i<=N;i++){
        int num1, num2;

        std::cin >> num1 >> num2;

        std::cout << "Case " << i << ": " << num1 + num2 << "\n";

    }

    return 0;
}