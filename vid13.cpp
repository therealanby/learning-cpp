#include <iostream>

using std::cout;
using std::cin;
//the things in the paranthese itself are called parameters. values passed to them are arguements
double pow(double base, int x){
    double result = 1;
    for(int i = 0; i<x ; i++){
        result *= base;
        //result  = result * base;
    }//nice same for loop syntax as java
    return result;
}//declaring and defining

int retInt(int); //declaration

int main(){
    int base, exponent;
    cin >> base;
    cin >> exponent;
    double p = pow(base, exponent);
    cout << p;

}

int retInt(int x){
    return x;
}//definition