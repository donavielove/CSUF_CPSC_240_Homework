#include <iostream>
using namespace std;
int main()
{
	short a = 0, b = 0, c = 0, h = 0, coe = 2, length = 0, width = 0,
		triArea = 0, triPer = 0, recArea = 0, recPer = 0;
	cout << "     /|\\               -----------------------" << endl;
	cout << "    / | \\              |                     |" << endl;
	cout << " a /  |  \\b            |                     |width" << endl;
	cout << "  /  h|   \\            |                     |" << endl;
	cout << " /    |    \\           |                     |" << endl;
	cout << "-------------           -----------------------" << endl;
	cout << "       c                     length            " << endl;
	cout << "Enter the value of a, b, c, and h for the triangle: ";
	cin >> a >> b >> c >> h;
	cout << "Enter the length and width of the rectangle:";
	cin >> length >> width;
	_asm
	{
		mov ax, c;
		imul h;
		idiv coe;
		mov triArea, ax;
	}
	cout << "Triangle" << endl;
	cout << "        Area...................." << triArea << endl;
	cout << "        Perimeter..............." << triPer << endl;
	cout << " Pectangle" << endl;
	cout << "        Area...................." << recArea << endl;
	cout << "        Perimeter..............." << recPer << endl;


}