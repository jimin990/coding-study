#include <iostream>
#include <deque>
#include <string>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;

    std::cin >> N;

    std::deque<int> DQ;

    std::string command;

    for(int i =0;i<N;i++){

        std::cin >> command;

        if(command == "push_front"){
            int X;

            std::cin >> X;

            DQ.push_front(X);
        }else if(command == "push_back"){
            int X;

            std::cin >> X;

            DQ.push_back(X);
        }else if(command == "pop_front"){
            
            if(DQ.empty()){
                std::cout << "-1" << "\n";
            }else{
                
                int X = DQ.front();
                DQ.pop_front();
                std::cout << X << "\n";
            }
        }else if(command == "pop_back"){
            if(DQ.empty()){

                std::cout << "-1" << "\n";
            }else{

                int X = DQ.back();
                DQ.pop_back();
                std::cout << X << "\n";
            }
        }else if(command == "size"){
            std::cout << DQ.size() << "\n";
        }else if(command == "empty"){
            if(DQ.empty()){
                std::cout << "1" << "\n";
            }else{
                std::cout << "0" << "\n";
            }
        }else if(command == "front"){
            if(DQ.empty()){
                std::cout << "-1" << "\n";
            }else{
                std::cout << DQ.front() << "\n";
            }
        }else{
            if(DQ.empty()){
                std::cout << "-1" << "\n";
            }else{
                std::cout << DQ.back() << "\n";
            }
        }
    }

    return 0;
}