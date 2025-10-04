#include <iostream>
#include <algorithm>

int main(void)
{

    while (true)
    {
        long long a, b, c, d;

        std::cin >> a >> b >> c >> d;

        long long count = 0;

        if(a ==0 && b ==0 && c == 0 && d ==0){
            break;
        }
        
        while (!(a == b && b == c && c == d && d == a))
        {

            long long a_tmp = std::abs(a - b);

            long long b_tmp = std::abs(b - c);

            long long c_tmp = std::abs(c - d);

            long long d_tmp = std::abs(d - a);

            a = a_tmp;
            b = b_tmp;
            c = c_tmp;
            d = d_tmp;

            count++;
        }

        std::cout << count << "\n";
    }

    return 0;
}