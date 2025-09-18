// This program calculates the average monthly water bill
// and provides feedback based on usage

// SAMUEL TORRES

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double quarter1, quarter2, quarter3, quarter4;
    double averageMonthly;

    // Prompt user for each quarter's bill
    cout << "Please input your water bill for quarter 1:" << endl;
    cin >> quarter1;

    cout << "\nPlease input your water bill for quarter 2:" << endl;
    cin >> quarter2;

    cout << "\nPlease input your water bill for quarter 3:" << endl;
    cin >> quarter3;

    cout << "\nPlease input your water bill for quarter 4:" << endl;
    cin >> quarter4;

    averageMonthly = (quarter1 + quarter2 + quarter3 + quarter4) / 12.0;

    cout << fixed << setprecision(2);
    cout << "\nYour average monthly bill is $" << averageMonthly << ". ";

    if (averageMonthly > 75)
        cout << "You are using excessive amounts of water" << endl;
    else if (averageMonthly >= 25)
        cout << "You are using a typical amount of water" << endl;
    else
        cout << "Great job conserving water!" << endl;

    return 0;
}