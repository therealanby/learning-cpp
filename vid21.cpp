#include <iostream>
#include <float.h>

using std::cout;

int main(){
    float a = 10.0/3; //put a decimal point to avoid integer divison
    double b = 77000; // 7.7E4 scientific notation -> 7.7 x 10^4
    double sciB = 7.7E4;
    long double c;

    //7.7 * 10000 = 770000
    //floating point values are stored in the scientific notation format

    cout << sciB << "\n";
    cout << std::fixed << a << "\n";//huh suppose to output something weird like 33333333.18808....
    //basically, doubles are more precise than floats
    cout << LDBL_DIG;

    //float. precise up to 6 values
    //double. 15
    //long double. 18
}
