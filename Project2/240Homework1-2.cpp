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

//Donavie's code Bellow
/*

int main() {
	short side1, side2, base, height, length, width, triArea, triPerim, rectArea, rectPerim, two = 2;
	cout << setw(9) << "/|\\" << setw(35) << "-------------------------" << endl;
	cout << setw(10) << "/ | \\" << setw(34) << "|                       |" << endl;
	cout << setw(14) << "A  /  |  \\  B" << setw(36) << "|                       | Width" << endl;
	cout << setw(12) << "/  H|   \\" << setw(32) << "|                       |" << endl;
	cout << setw(13) << "/    |    \\" << setw(31) << "|                       |" << endl;
	cout << setw(14) << "-------------" << setw(30) << "-------------------------" << endl;
	cout << setw(8) << "C" << setw(26) << "Length" << endl;

	cout << "Enter the values of A,B,C and H for the triangle: ";
	cin >> side1 >> side2 >> base >> height;
	cout << "Enter the length and the width of the rectangle: ";
	cin >> length >> width;
	_asm {
		//triangle area
		mov ax, base;		// ax = base;
		cwd;				// dx:ax
		imul height;		// dx:ax = base * height		
		idiv two;			// ax = (base * height)/2
		mov triArea, ax;	// triArea = (base * height)/2

		//triangle perimeter 
		mov bx, side1;		//bx = side1;
		add bx, side2;		//bx = side1 + side2
		add bx, base;		//bx = side1 + side2 + base
		mov triPerim, bx;	//triPerim = side1 + side2 + base

		//rectangle area 
		mov ax, length;		// ax = length
		cwd;				// dx:ax
		imul ax, width;		// dx:ax = length * width
		mov rectArea, ax;	//rectArea = length * width

		//rectangle perimeter
		mov cx, length;		//cx = length
		add cx, width;		//cx= lenght + width
		imul two;			//dx:cx = (length + width) * 2
		mov rectArea, dx;	//rectArea = (length + width) * 2
	}
	cout << setw(19) << "Triangle: " << endl << setw(41) << "Area ................. " << triArea << endl;
	cout << setw(41) << "Perimeter.............." << triPerim << endl;
	cout << setw(20) << "Rectangle " << endl << setw(40) << "Area ................. " << rectArea << endl;
	system("pause");
	return 0;
}
*/
