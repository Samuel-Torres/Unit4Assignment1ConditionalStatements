// This program categorizes a student's average into A, B, Pass, Fail,
// or reports invalid data if the input is above 100

// SAMUEL TORRES

#include <iostream>
using namespace std;

int main()
{
	float average;

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
	{
		cout << "Invalid data" << endl;
	}
	else if (average >= 90)
	{
		cout << "Category: A" << endl;
	}
	else if (average >= 80)
	{
		cout << "Category: B" << endl;
	}
	else if (average >= 60)
	{
		cout << "You Pass" << endl;
	}
	else if (average >= 0)
	{
		cout << "You Fail" << endl;
	}
	else
	{
		cout << "Invalid data" << endl;
	}

	return 0;
}