#include<iostream>
using namespace std;
int main()
{
	short drinkPrice = 2, sandPrice = 4, drinkNum = 0, sandNum = 0 , total = 0;
	cout << "--------------------MENU----------------------" << endl;
	cout << " Drinks.....................................$" << drinkPrice << endl;
	cout << " Sandwiches.................................$" << sandPrice << endl;
	cout << "      How many drinks?";
	cin >> drinkNum;
	cout << "      How many sandwiches?";
	cin >> sandNum;
	_asm
	{
		mov ax, drinkPrice;
		imul drinkNum;
		mov bx, ax;
		mov ax, sandPrice;
		imul sandNum;
		add ax, bx;
		mov total, ax;
	}
	cout << "         Your total bill $" << total << endl;
}
