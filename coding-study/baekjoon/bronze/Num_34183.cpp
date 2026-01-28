#include <iostream>

int main(void)
{
    int N , M, A, B;

    std::cin >> N >> M >> A >> B;

    int required_chair = ((N * 3) - M ) > 0 ? ((N * 3) - M ) : 0;

    if(required_chair == 0)
    {
        std::cout << "0"; 
        return 0;
    } 
    
    std::cout << (required_chair * A) + B;

    return 0;
}