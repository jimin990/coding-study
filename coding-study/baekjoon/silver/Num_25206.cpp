#include <iostream>
#include <string>

int main(void){

    /**
     * A+	4.5
A0	4.0
B+	3.5
B0	3.0
C+	2.5
C0	2.0
D+	1.5
D0	1.0
F	0.0

     */
    float sum_score = 0,score = 0,input;

    std::string str,alpabat;

    for(int i=0;i<20;i++){
        std::cin >> str >> input >> alpabat;

        if(alpabat != "P"){

            float temp;
            if(alpabat == "A+"){
                temp = 4.5;
            }else if(alpabat == "A0"){
                temp = 4.0;
            }else if(alpabat == "B+"){
                temp = 3.5;
            }else if(alpabat == "B0"){
                temp = 3.0;
            }else if(alpabat == "C+"){
                temp = 2.5;
            }else if(alpabat == "C0"){
                temp = 2.0;
            }else if(alpabat == "D+"){
                temp = 1.5;
            }else if(alpabat == "D0"){
                temp = 1.0;
            }else if(alpabat == "F"){
                temp = 0.0;
            }

            score +=input;
            sum_score += input * temp;
        }
    }
    
     std::cout << sum_score / score;
    
    return 0;
}