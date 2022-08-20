// Using references assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swap1(int x, int y);
void swap2(int& x, int& y);
int main()
{
		int normalCheck = 500;
		int hackedCheck = 1000;
		cout << "Original account values " << endl;

		cout << "standard account value: " << normalCheck;
		cout << "hacked account value: " << hackedCheck;

		cout << "transaction occuring" << endl;
		normalCheck + 250;
		cout << "Account balance after transaction" << normalCheck << endl;
		cout << "swap occuring..." << endl;
		swap1(normalCheck, hackedCheck);
		hackedCheck + 250;
		swap2(normalCheck, hackedCheck);

		cout << "standard account value: " << normalCheck;
		cout << "hacked account value: " << hackedCheck;
}


