#include <iostream>

using namespace std;

int main()
{
	//int a, b, c;
	int n = 358;
	int hundred = 100;
	int ten = 10;
	int d3, d2, d1, r;
	_asm
	{
		// digit3
		mov eax, n; // ax = 358
		//cwd;// convert word to double word -- the operard is always ax
		cdq;
		idiv hundred;
		mov d3, eax;
		// digit 2
		mov eax, edx;
		cwd;
		idiv ten;
		mov d2, eax;
		// digit1
		mov eax, edx;
		mov d1, eax;
		// sum of digits
		add eax, d2;
		add eax, d3;
		mov r, eax;
	}
	cout << "The total of digits in " << n << " is " << r << endl;
	return 0;
}