#include <iostream>
#include <vector>

std::vector<std::vector<int>> tree;

void preorder(int node)
{
    if(node < 0 ) return;

    std::cout << char(node + 65);

    preorder(tree[node][0]);
    preorder(tree[node][1]);
}

void inorder(int node)
{
    if(node < 0 ) return;

    inorder(tree[node][0]);

    std::cout << char(node + 65);

    inorder(tree[node][1]);
}

void postorder(int node)
{
     if(node < 0 ) return;

    postorder(tree[node][0]);

    postorder(tree[node][1]);

    std::cout << char(node + 65);
}

int main(void)
{
    int N;
    
    std::cin >> N;

    tree.resize(N);

    for(int i =0;i<N;i++)
    {   
        char root, left, right;

        std::cin >> root >> left >> right;

        tree[root - 65].push_back(left - 65);
        tree[root - 65].push_back(right - 65);
    }

    preorder(0);
    std::cout << "\n";
    inorder(0);
    std::cout << "\n";
    postorder(0);
    return 0;
}