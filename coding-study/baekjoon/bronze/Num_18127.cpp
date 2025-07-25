#include <iostream>

int main()
{
    long A, B, size = 1;
    std::cin >> A >> B;
    
    int C = (A - 2);
    
    for(int i =0;i< B;i++){
        size = size + 1 + (C * (i+1));
    }
    
    std::cout << size;
}