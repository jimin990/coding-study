#include <iostream>
#include <queue>
#include <set>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;

    std::cin >> T;

    for(int i =0;i<T;i++){

        int Q;

        std::cin >> Q;

        std::multiset<int> bst;

        for(int j=0;j<Q;j++){

            char commend;

            int num;

            std::cin >> commend >> num;

            if(commend == 'I'){

                bst.insert(num);
            }else{
                if(num == -1){
                    if(!bst.empty()){
                        bst.erase(bst.begin());  
                    }
                    
                }else{

                    if(!bst.empty()){
                        bst.erase(--bst.end());  
                    }
                }
            }

        }

        if(bst.empty()){
            std::cout << "EMPTY" << "\n";
        }else{
            std::cout << *--bst.end() << " " << *bst.begin() << "\n";
        }

    }

    return 0;
}