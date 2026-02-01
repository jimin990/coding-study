#include <iostream>

int main(void)
{

    int N;

    std::cin >> N;

    for(int i =0;i<N;i++)
    {
        std::cout << " @@@   @@@ " << "\n"
                  << "@   @ @   @" << "\n" 
                  << "@    @    @" << "\n"
                  << "@         @" << "\n"
                  << " @       @ " << "\n"
                  << "  @     @  " << "\n"
                  << "   @   @   " << "\n"
                  << "    @ @    " << "\n"
                  << "     @     " << "\n";
    }

    return 0;
}