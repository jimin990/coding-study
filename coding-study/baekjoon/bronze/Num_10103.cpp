#include <iostream>

int main(void){

    int n;

    std::cin >> n;

    int chang = 100, shang = 100;

    for(int i=0;i<n;i++){

        int c, s;

        std::cin >> c >> s;

        if(c > s){
            shang-=c;
        }else if(c < s){
            chang-=s;
        }
    }

    std::cout << chang << "\n" << shang;

    return 0;
}