#include <iostream>

int main(void) {

	// ŷ 1��, �� 1��, �� 2��, ��� 2��, ����Ʈ 2��, �� 8��
	int K,Q,L,B,N,P;

	std::cin >> K >> Q >> L >> B >> N >> P;

	std::cout << 1 - K << " " << 1 - Q << " " << 2 - L << " " << 2 - B << " " << 2 - N << " " << 8 - P;

	return 0;
}