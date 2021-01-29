#include <iostream>
using namespace std;

class fruitseller
{
private:
	int numofapple;
	int priceofapple;
	int mymoney;

public:
	void initmember(int Anum, int Aprice, int M) {
		mymoney = M;
		priceofapple = Aprice;
		numofapple = Anum;
	}
	int sellapple(int money)
	{
		int apple = money / priceofapple;
		numofapple -= apple;
		mymoney += money;
		return apple;
	}
	void showcurstate()
	{
		cout << "seller's numofapple: " << numofapple << endl;
		cout << "seller's money: " << mymoney << endl;
	}


};

class fruitbuyer
{
private:
	int money;
	int numofapple;

public:
	void initmember(int M, int numA)
	{
		money = M;
		numofapple = numA;
	}
	void buyapple(fruitseller &seller, int M)
	{
		numofapple+=seller.sellapple(M);
		money -= M;
	}
	void showcurstate()
	{
		cout << "buyermoney: " << money << endl;
		cout << "buyerapple: " << numofapple << endl;
	}

};