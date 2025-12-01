#include <iostream>

int main(void)
{

    int A, B , C, D;

    std::cin >> A >> B >> C >> D;

    if((A+C) < (B + D)){
        std::cout << "Hanyang Univ.";
    }else if((A+C) > (B + D)){
        std::cout << "Yongdap";
    }else{
        std::cout << "Either";
    }

    return 0;
}