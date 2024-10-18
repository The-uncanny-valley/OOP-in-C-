#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double dollarSum;
    cin >> dollarSum;
    cout << setw(4) << "GBP" << setw(14) << dollarSum / 1.487 << endl;
    cout << setw(4) << "CHF" << setw(14) << dollarSum / 0.172 << endl;
    cout << setw(4) << "DM" << setw(14) << dollarSum / 0.584 << endl;
    cout << setw(4) << "JPY" << setw(14) << dollarSum / 0.00955 << endl;
    return 0;
}