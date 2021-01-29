#include<iostream>
#include<cstring>
#include "Car.h"
using namespace std;

//car¸â¹ö º¯¼ö
//gameID, fuelgague, curspeed
//car¸â¹ö ÇÔ¼ö
//void Initalmember(char* ID, int fuel);
//void ShowCarstate();
//void Accel();
//void Break();

void Car::Initmember(char* ID, int fuel)
{
	strcpy_s(gameID,strlen(ID)+1,ID);
	fuelGague = fuel;
	curSpeed = 0;
}
void Car::ShowCarstate()
{
	cout << "gameID is" << gameID << endl;
	cout << "fuelGague is" << fuelGague << endl;
	cout << "curspeed is" << curSpeed << endl;
}

void Car::Accel() 
{
	if (fuelGague <= 0)
	{
		return;
	}
	else
	{
		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
		{
			fuelGague -= CAR_CONST::FUEL_STEP;
			curSpeed = CAR_CONST::ACC_STEP;
		}
		else
		{
			fuelGague -= CAR_CONST::FUEL_STEP;
			curSpeed += CAR_CONST::ACC_STEP;
		}
	}
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	else
	{
		curSpeed -= CAR_CONST::BRK_STEP;
	}
}
