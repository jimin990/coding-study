#include <iostream>

int main(void){

    for(int i =0;i<3;i++)
    {
        int h1, m1, s1, h2, m2, s2;

        std::cin >> h2 >> m2 >> s2 >> h1 >> m1 >> s1;

        int h, m, s;

        h = h1 - h2;

        if((s1 - s2) < 0)
        {
            m1--;
            s1+=60;
            s = s1 - s2;
        }else s = s1 - s2;

        if((m1 - m2) < 0)
        {
            h--;
            m1+=60;
            m = m1 - m2;
        }else m = m1 - m2;

        std::cout << h << " " << m << " " << s << "\n";

    }

    return 0;
}