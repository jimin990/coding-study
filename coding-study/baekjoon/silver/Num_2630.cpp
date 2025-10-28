#include <iostream>
#include <vector>

int paper_blue = 0, paper_white = 0;

void cutting(std::vector<std::vector<int>> &arr, int st_x, int en_x, int st_y, int en_y)
{
    int paper_color = arr[st_y][st_x];

    for(int i =st_y;i<en_y;i++)
    {
        for(int j=st_x;j<en_x;j++)
        {
            if(paper_color != arr[i][j])
            {

                int mid_x = (st_x + en_x) / 2;
                int mid_y = (st_y + en_y) / 2;

                cutting(arr, st_x,  mid_x, st_y,  mid_y);
                cutting(arr, mid_x, en_x,  st_y,  mid_y);
                cutting(arr, st_x,  mid_x, mid_y, en_y);
                cutting(arr, mid_x, en_x,  mid_y, en_y);

                return;
            }
        }
    }

    if(paper_color == 1)
    {
        paper_blue++;
    }else
    {
        paper_white++;
    }
}

int main(void)
{
    
    int N;

    std::cin >> N;

    std::vector<std::vector<int>> paper(N,std::vector<int>(N,0));

    for(int i =0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            std::cin >> paper[i][j];
        }
    }

    cutting(paper, 0, N, 0, N);

    std::cout << paper_white << "\n" << paper_blue;
    
    return 0;
}
