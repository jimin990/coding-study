#include <iostream>

int main(void){
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N;
    std::cin >> N;

    int* arr0 = new int[41];
    int* arr1 = new int[41];

    arr0[0] = 1;
    arr0[1] = 0;
    
    arr1[0] = 0;
    arr1[1] = 1;

    for(int i =2;i<41;i++){
        arr0[i] = arr0[i-1] + arr0[i-2];
        arr1[i] = arr1[i-1] + arr1[i-2];
    }
    
    int input;

    while(N--){
        std::cin >> input;
        std::cout << arr0[input] << " " << arr1[input] << "\n";
    }

    return 0;
}