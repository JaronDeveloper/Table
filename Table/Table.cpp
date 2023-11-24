#include <iostream>

template<class T>
T** table(T a,T b) {
	int** array_table = new int* [a];
	for (int i = 0;i < a;i++) {
		array_table[i] = new int[b];
	}
return array_table;
}

int main() {
	auto test = table<int>(2,3);	
	test[0][0] = 4;
	test[1][1] = 14;
	std::cout << test[0][0] << '\n';
	std::cout << test[1][1];
	delete[] test;
}