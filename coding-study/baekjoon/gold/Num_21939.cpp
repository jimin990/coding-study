#include <iostream>
#include <set>
#include <utility>
#include <string>
#include <map>

int main(void){

    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;

    std::cin >> N;

    std::map<int,int> problem_level;

    std::set<std::pair<int,int>> level_problem;

    for(int i =0;i<N;i++){

        int P,L;

        std::cin >> P >> L;

        problem_level.insert({P,L});

        level_problem.insert({L,P});
    }

    int M;

    std::cin >> M;

    for(int i =0;i<M;i++){

        std::string command;

        std::cin >> command;

        if(command == "recommend"){
            int x;

            std::cin >> x;

            if(x == 1){
                std::cout << (--level_problem.end()) -> second << "\n";
            }else{
                std::cout << (level_problem.begin()) -> second << "\n";
            }
        }else if(command == "add"){

            int P,L;

            std::cin >> P >> L;

            problem_level.insert({P,L});
            level_problem.insert({L,P});

        }else{
            int P;

            std::cin >> P;

            int level = problem_level[P];
            problem_level.erase(P);
            level_problem.erase({level,P});

        }
    }

    return 0;
}