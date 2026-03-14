#include <iostream>

int main(void)
{
    int n1,n2;

    std::cin >> n1 >> n2;

    int a = 100 - n1;
    int b = 100 - n2; 
    int c = 100 - (a + b);
    int d = a * b;
    int q = d / 100;
    int r = d % 100;

    std::cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n" 
    << c + q << " " << r;

    return 0;
}