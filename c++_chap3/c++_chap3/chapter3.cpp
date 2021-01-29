#include<iostream>
#include "Car.h"
#include "apple.cpp"
using namespace std;

struct Point// c¾ð¾îÀÇ_struct_example0
{
	int xpos;
	int ypos;
	
	void MovePos(int x, int y)
	{
		xpos = xpos + x;
		ypos = ypos + y;
	}

	void AddPoint(const Point& pos)
	{
		xpos = xpos + pos.xpos;
		ypos = ypos + pos.ypos;
	}

	void ShowPosition()
	{
		cout << "xpos:" << xpos << endl;
		cout << "ypos:" << ypos << endl;
	}
};


int main()
{
	Point p1 = { 12,4 };
	Point p2 = { 20, 30 };

	p1.MovePos(-7, 10);
	p1.ShowPosition();
	p1.AddPoint(p2);
	p1.ShowPosition();

	fruitbuyer buyer;
	buyer.initmember(5000, 0);
	fruitseller seller;
	seller.initmember(20, 1000, 0);
	buyer.buyapple(seller, 2000);
	seller.showcurstate();
	buyer.showcurstate();

	

}