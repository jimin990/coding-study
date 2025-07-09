#include <iostream>

int main(void) {

	// Å· 1°³, Äý 1°³, ·è 2°³, ºñ¼ó 2°³, ³ªÀÌÆ® 2°³, Æù 8°³
	int K,Q,L,B,N,P;

	std::cin >> K >> Q >> L >> B >> N >> P;

	std::cout << 1 - K << " " << 1 - Q << " " << 2 - L << " " << 2 - B << " " << 2 - N << " " << 8 - P;

	return 0;
}