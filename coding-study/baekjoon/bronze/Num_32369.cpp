#include <iostream>

int main(void)
{
    int N;

    std::cin >> N;

    int po = 1, no = 1;
    int A, B;

    std::cin >> A >> B;

    for(int i=0;i<N;i++)
    {
        po += A;
        no += B;

        if(po < no)
        {
            int tmp = po;
            po = no;
            no = tmp;
        }else if(po == no)
        {
            no--;
        }
    }

    std::cout << po << " " << no;
    return 0;
}