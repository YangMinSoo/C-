#include <iostream>
#include <string.h>
using namespace std;

bool Ispositive(int a) // boolean true or false
{
	if (a > 0) {
		return true;
	}
	else
	{
		return false;
	}
}

void CallByReference(int& a, int& b) // swap using by (call by reference)
{
	int tmp = a;
	a = b;
	b = tmp;
}

typedef struct __Point // ±¸Á¶Ã¼
{
	int xpos;
	int ypos;
}Point;
Point& PntAdder(const Point& pp1, const Point& pp2)
{
	Point *a= new Point;
	a->xpos = pp1.xpos + pp2.xpos;
	a->ypos = pp1.ypos + pp2.ypos;
	return *a;
}
int main()
{
	//boolean
	cout << "input your number: " << endl;
	int a;
	cin >> a;
	if (Ispositive(a) == true)
	{
		cout << "number is positive" << endl;
	}
	else 
	{
		cout << "number is negative" << endl;
	}

	//call by reference
	int r1 = 1, r2 = 2;
	cout << "using call by reference (swap number r1, r2) " << endl;
	CallByReference(r1, r2);
	cout << r1 << "," << r2 << endl << endl;
	
	// new & delete
	char* message = new char[30];
	char str1[10] = "c++";
	strcpy_s(message,sizeof(str1),str1);
	cout << message << endl;
	delete[]message;
	
	//Pointer & reference & new & delete
	Point *p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 1;
	Point* p2 = new Point;
	p2->xpos = 2;
	p2->ypos = 2;

	Point& FPoint = PntAdder(*p1, *p2);
	cout << FPoint.xpos << "," << FPoint.ypos << endl;
	delete p1;
	delete p2;
	delete &FPoint;


}