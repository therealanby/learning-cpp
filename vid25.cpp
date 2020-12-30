#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(){

    string greeting;

    cin >> greeting; 
    cout << greeting;
    //cin will stop at whitespace. whatever is after the whitespace is still in the cin stream so it will be stored the next time it is called
    //to avoid this:
    string x;

    getline(cin, x); //for strings (reads entire line)
    //cin.getline() //for numbers
    cout << x;
}