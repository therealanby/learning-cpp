#include <iostream>
#include <climits> //for testing type limits

using std::cout;

int main(){
    short a;//16
    int b;//32
    long c;//32
    long long d;//64
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    //presumably, unsigned versions can store twice as much but only allow positive values
    signed int aaa;//signed is same but is only negative

    //short <= int <= long <= long long
    cout << sizeof(short) <<std::endl; //returns byte(8 bits)
    //returned 2 bytes/16 bits

    //-sizeof is an operator and not a function

    cout <<sizeof(long long) << std::endl;  

    cout << LONG_LONG_MIN << std::endl;
    cout << LONG_LONG_MAX << std::endl;//exported constants from climit
    /*
    short: -32,767 to 32,767
    int: -2147483648 to 2147483657
    long: same as int
    long long: -9223372036854775808 to 9223372036854775807
    */      
}