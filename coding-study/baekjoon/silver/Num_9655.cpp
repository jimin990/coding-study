#include <iostream>
#include <vector>

int main(void)
{
    int N;

    std::cin >> N;

    std::vector<bool> arr(N+1,true);

    arr[1] = true; 
    if (N >= 2) arr[2] = false;
    if (N >= 3) arr[3] = true;

    for(int i =4;i<=N;i++)
    {
        arr[i] = !arr[i-1] || !arr[i-3];
           
    }

    std::cout << (arr[N] ? "SK" : "CY");

    return 0;
}