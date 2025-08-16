#include <iostream>
#include <vector>

int main(void){

    int n;
    std::cin >> n;

    std::vector<long> vec(1001,0);

    vec[1] = 1;
    vec[2] = 2;
    
    for(int i =3;i<1001;i++){
        vec[i] = (vec[i-1] + vec[i-2]) % 10007; 
    }

    std::cout << vec[n];

    return 0;
}