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

protected:
	string sName;

};

void person::GetName(string sNamepass)
{
	string sName = sNamepass;
}

void person::DisplayName()
{
	cout << sName;
}

int main()
{
	person oUsers[3];
	string sName = "";
	for (int iCount = 0; iCount < 3; iCount++) {

		cout << "please enter the name for user " << iCount + 1;
		cin >> sName;
		oUsers[iCount].GetName(sName);


	}
    return 0;
}

