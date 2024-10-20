#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string city = "Moscow";
    int population = 12641000;
    cout << city << setfill('.') << setw(15) << population << endl;
    return 0;
}