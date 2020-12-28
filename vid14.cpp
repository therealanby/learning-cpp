#include <iostream>

using std::cout;
using std::cin;

//void functions. returns nothing
double pow(double, int);

void print_pow(double b, int ex){
    cout << b << " raised to the power of "<< ex << " is " << pow(b,ex);
}

double pow(double b, int x){
    double result = 1;
    for(int c = 0; c < x; c++){//lol c++
        result *= b;
    }
    return result;
}

int main(){
    print_pow(10,2);
}