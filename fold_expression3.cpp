#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	// I : �ʱⰪ
	// I + ... + args;  // (((I + E1) + E2) + E3)

	(cout << ... << args); // ((( cout << 1) << 2) << 3)
}
int main()
{
	foo(1, 2, 3);

	// �Ʒ� �ڵ� ����
	//	(((cout << 1) << 2) << 3) << endl; // 123

}