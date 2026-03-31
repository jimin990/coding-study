#include <iostream>
#include <iomanip>
#include <vector>

int main(void)
{
    int C;

    std::cin >> C;

    while(C--)
    {
        int N;
        std::cin >> N;

        std::vector<int> arr(N,0);

        float sum = 0;

        for(int i =0;i<N;i++)
        {
            std::cin >> arr[i];

            sum+=arr[i];
        }

        float avg = sum/N;

        int count=0;

        for(int i =0;i<N;i++)
        {
            if(arr[i] > avg) count++; 
        }

        double result = (double)count / N;

        std::cout << std::fixed << std::setprecision(3) << result * 100 <<"%\n";
    }
    return 0;
}