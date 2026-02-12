#include <iostream>
#include <vector>

int main(void)
{
    float A, B, C, D;

    std::cin >> A >> B >> C >> D;

    std::vector<float> arr(4,0);

    arr[0] = A/C + B/D;
    arr[1] = C/D + A/B;
    arr[2] = D/B + C/A;
    arr[3] = B/A + D/C;

    int N = 0;

    int max = 0;

    for(int i =0;i<4;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            N = i;
        } 

    }
    
    std::cout << N;

    return 0;
}