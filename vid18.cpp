#include <iostream>

using std::cout;
using std::cin;

int main(){
    //chars are used to store single numbers, letters or symbols
    char a;//char is 8 bits
    a = 'A'; //single quotes, double quotes are reserved for strings
    //chars are stored like integers but each value represents a different symbol
    cout << (int)a << std::endl; 
    //you can cast like in java
    //ascii values for chars

    char x = 'A';
    char y = 65;
    //x and y are equivalent. putting an int value to a variable will return the corresponding ascii symbol
    //overflowing bits will 'reset'/wrap around. 
    //overflowing will cause an error. you can set the char to unsigned or signed to remove that to access the extended table
    //use unicode for other stuff
}