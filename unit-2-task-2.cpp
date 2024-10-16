#include <iostream>
#include <iomanip> // для использования setw
using namespace std;

int main() {
    int n1 = 1990;
    int n2 = 1991;
    int n3 = 1992;
    int n4 = 1993;
    int n5 = 135;
    int n6 = 7290;
    int n7 = 11300;
    int n8 = 16200;
    // применение манипулятора setw
    cout << setw(7) << n1 << setw(8) << n5 << endl <<
     setw(7) << n2 << setw(8) << n6 << endl << 
     setw(7) << n3 << setw(8) << n7 << endl <<
     setw(7) << n4 << setw(8) << n8 << endl;


}