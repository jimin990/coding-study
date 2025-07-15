#include <iostream>
#include <algorithm>

int main(void){
    

    int N,M;

    std::cin >> N;

    int* arr = new int[N];
    
    for(int i =0;i<N;i++){
        std::cin >> arr[i];
    }

    std::cin >> M;

    int input;

    while(M--){
        std::cin >> input;

        int st = 0,mid,en = N;

        while(st >= en){
            mid = (st + en) / 2;

            if(arr[mid] < input){
                en = mid+1;
            }else{
                
            }
        }

    }

    return 0;
}




// #include <iostream>
// #include <unordered_map>

// int main(){
    
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(NULL);
    
//     int N,M;
//     std::cin >> N;
    
//     std::unordered_map<int,int> cards;
    
//     for(int i=0;i<N;i++){
//         int number;
//         std::cin >> number;
        
//         if(cards.find(number) == cards.end()){
//             cards.insert({number,1});
//         }else{
//             cards[number]++;
//         }
        
//     }
    
//     std::cin >>M;
//     for(int i=0;i<M;i++){
//         int number;
//         std::cin >> number;
//         if(cards.find(number) == cards.end()){
//             std::cout << "0" << " ";
//         }else{
//             std::cout << cards[number] << " ";
//         }
        
//     }
    
//     return 0;
// }
