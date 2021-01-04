#include<iostream>
using namespace std;

double pow(double base, double pow = 2){ //declare default value like this (add = after param)
    int total = 1;
    for(int i = 0;i<pow;i++){
        total = total*base;
    }
    return total;
} //you can only declare definitive values meaning you can't assign variables as a default value

//minize overloading when you can and just use default values
//also, all parameters after a default param must also have a default value
int main(){
    cout << pow(2,3) << " " << pow(2); 
}