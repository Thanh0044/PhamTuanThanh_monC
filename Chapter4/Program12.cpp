#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PAY_RATE = 50.0; // Hourly pay rate
    const int MIN_HOURS = 5;     // Minimum billable hours
    double hours, charges;       // Hours worked and total charges

    // Get the hours worked.
    cout << "How many hours were worked? ";
    cin >> hours;

    // Determine the hours to charge for.
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    // Calculate and display the charges.
    charges = PAY_RATE * hours;
    cout << fixed << showpoint << setprecision(2)
         << "The charges are $" << charges << endl;

    return 0;
}