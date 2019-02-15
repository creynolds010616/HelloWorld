/*
	Carter Reynolds		

		Chapter 14 - Lab Assignment 1

		Description: This program will handle an exception for a user-entered negative number.

		Due: 11/27/2018
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	
	try
	{
		cout << "Enter feet: ";
		cin >> a;
		cout << endl << "Enter inches: ";
		cin >> b;

		if (a <= 0)
			throw string("feet");	

		if (b <= 0)
			throw string("inches");

	}

	catch (string s)
	{
		cout << "Invalid Dimension: " << s << endl;
		while (a <= 0 || b <= 0)
		{
			if (a <= 0)
			{
				cout << "Retype feet: ";
				cin >> a;
			}
			else if (b <= 0)
			{
				cout << endl << "Retype inches: ";
				cin >> b;
			}
			
		}

	}

	cout << endl;
	cout << "Length: " << a << endl
		 << "Inches: " << b << endl;

	system("pause");
	return 0;
}

