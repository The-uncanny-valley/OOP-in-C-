#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sterling;
    int shilling;
    int penny;

    char ch = 156;

    cout << "Enter sterling: ";
    cin >> sterling;
    cout << "Enter shilling: ";
    cin >> shilling;
    cout << "Enter penny: ";
    cin >> penny;
    double integerPart = 0;
    integerPart = integerPart + sterling + (shilling / 20) + ((penny / 12) / 20);
    double pennyNew = (penny / 12.0 + shilling) / 20.0 * 100;
    int fractionalPart = ceil(pennyNew);
    cout << ch << integerPart << "." << fractionalPart << endl;
    return 0;
}