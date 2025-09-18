// This program tests whether or not two input values
// are equal

// SAMUEL TORRES

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "Please enter the first integer: ";
	cin >> num1;

	cout << "Please enter the second integer: ";
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2)
	{
		cout << "The values are the same. Hey that’s a coincidence!" << endl;
	}
	else
	{
		cout << "The values are not the same" << endl;
	}

	return 0;
}