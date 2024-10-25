#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int pounds; // фунты
    float decimalPenny; // пенс
    int shilling, penny;
    cin >> pounds >> decimalPenny;
    shilling = static_cast<int>(decimalPenny * 20);
    penny = static_cast<int>(((decimalPenny * 20) - shilling) * 12);
    cout << pounds << "." << shilling << "." << penny << endl;
    return 0;
}