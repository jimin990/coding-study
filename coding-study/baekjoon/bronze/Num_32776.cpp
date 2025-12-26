#include <iostream>

int main(void){

    int Sab, Ma, Fab, Mb;

    std::cin >> Sab >> Ma >> Fab >> Mb;

    (Sab <= (Ma + Fab + Mb) || Sab <= 240 ? std::cout << "high speed rail" : std::cout << "flight");

    return 0;
}