#include <iostream>

int main(void){

    int T;

    std::cin >> T;

    for(int i = 1; i<=T;i++){
        
        int N,A,B,u,v;
        std::cin >> N >> A >> B;

        for(int j=0;j<N;j++){
            std::cin >> u >> v;
        }

        std::cout << "Material Management " << i << "\n";
        std::cout << "Classification ---- End!" << "\n";
    }
    return 0;
}