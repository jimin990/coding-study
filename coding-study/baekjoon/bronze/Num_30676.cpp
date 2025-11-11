#include <iostream>

int main(void){

    int Star;

    std::cin >> Star;

    if(620 <= Star && Star <= 780){
        std::cout << "Red";
    }else if(590 <= Star && Star < 620){
        std::cout << "Orange";
    }else if(570 <= Star && Star < 590){
        std::cout << "Yellow";
    }else if(495 <= Star && Star < 570){
        std::cout << "Green";
    }else if(450 <= Star && Star < 495){
        std::cout << "Blue";
    }else if(425 <= Star && Star < 450){
        std::cout << "Indigo";
    }else{
        std::cout << "Violet";
    }

    return 0;
}