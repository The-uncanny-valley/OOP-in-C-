#include <iostream> 
using namespace std;

int main() {
    signed int a, b;
    unsigned int c, d;
    char slash;
    cout << "Enter first fraction: ";
    cin >> a >> slash >> b;
    cout << "Enter second fraction: ";
    cin >> c >> slash >> d;
    cout << (a * d + b * c) << "/" << (b * d);
    return 0;
}