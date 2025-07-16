#include <iostream>

int main(void){
    

    int N;
    std::cin >> N;
    
    int* arr = new int[N];
    int* arr1 = new int[N];

    for(int i =0;i<N;i++){
        std::cin >> arr[i];
    }

    arr1[0] = arr[0];
    arr1[1] = arr[1]+arr[0];
    arr1[2] = arr[2] + arr[1] + arr[0];

    for(int i =3;i<N;i++){
        //arr1[i] = std::max(arr[i] + arr1[i-2],arr );
    }

    for(int i =0;i<N;i++){
        std::cout << arr1[i] << " ";
    }

    std::sort(arr1,arr1+N);

    std::cout << arr1[N-1];
    return 0;
}