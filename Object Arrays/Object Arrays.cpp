// Object Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

class person {
public:
	void GetName(string sNamepass);
	void DisplayName();
	void GetNumbers();
	void AddNumbers();
protected:
	string sName;
	int iNumbers[3];

};

void person::GetName(string sNamepass)
{
	sName = sNamepass;
}

void person::DisplayName()
{
	cout << sName << "\n";
}

void person::GetNumbers() {
	for (int iCount = 0; iCount < 3; iCount++)
	{
		cout << "Please enter Number " << iCount + 1;
		cin >> iNumbers[iCount];

	}
}

void person::AddNumbers() {
	int iTotal = 0;

	cout << "You are adding together ";
	for (int iCount = 0; iCount < 3; iCount++)
	{
		cout << iNumbers[iCount] << ", ";
		iTotal += iNumbers[iCount];
	}
	cout << "\n\nthe total is: " << iTotal;
}

int main()
{
	person oUsers[3];
	string sName;
	for (int iCount = 0; iCount < 3; iCount++) {

		cout << "please enter the name for user " << iCount + 1 << ": ";
		cin >> sName;
		oUsers[iCount].GetName(sName);
	}

	for (int iCount = 0; iCount < 3; iCount++)
	{
		cout << "User" << iCount + 1 << ": ";
		oUsers[iCount].DisplayName();

	}
	for (int iCount = 0; iCount < 3; iCount++)
	{
	 oUsers[iCount].DisplayName();
	 cout << "\n\n Can now enter 3 numbers";
	 oUsers[iCount].GetNumbers();
	}

	for (int iCount = 0; iCount < 3; iCount++)
	{
		oUsers[iCount].AddNumbers();
	}
	_getch();
    return 0;
}

