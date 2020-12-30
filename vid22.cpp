#include <iostream>
using std::cout;

#define Y 10;
//another way to define a constant (macro)

int main(){
    //const constant (const)
    const int X = 5;//a constant. read-only variable. you can't reassign after declaration
    //don't worry about value being changed
    //initialize and declare at same time. if you just initalize, you can't assign a value to it

    enum { y = 100}; //another way to create constants (enum)
}