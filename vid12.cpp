#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main(){
    int base, exponent; //multi declaration
    cout <<"base?\n";
    cin >> base;
    cout <<"power?\n";
    cin >> exponent;
    double power  = pow(base, exponent);
    cout << power;
}