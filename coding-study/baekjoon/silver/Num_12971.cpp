#include <iostream>

int main() {
    int arr[6];

    for (int i = 0; i < 6; i++) {
        std::cin >> arr[i];
    }

    // ������ ���Ʈ������ �ظ� ã�� �õ�
    int max = arr[0] * arr[1] * arr[2];

    for (int i = 0; i <= max; i++) {
        if ((i % arr[0] == arr[3]) && (i % arr[1] == arr[4]) && (i % arr[2] == arr[5])) {
            std::cout << i;
            return 0;
        }
    }

    std::cout << "-1";
    return 0;
}