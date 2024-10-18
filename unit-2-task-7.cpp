#include <iostream>
using namespace std;

int main() {
    double theDegreeCelsius;
    double theDegreesFahrenheit;
    cin >> theDegreeCelsius;
    theDegreesFahrenheit = theDegreeCelsius * 9 / 5 + 32;
    cout << "\370" << "C " << theDegreeCelsius << endl;
    cout << "\370" << "F " << theDegreesFahrenheit << endl;
    return 0;
}