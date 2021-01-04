#include <iostream>
#include "vid73.h"//just need the .h as long as the other file also has a .h
int main(){
    std::cout << area(1,2) << " " << perimeter(1);

}

//another option when compiling besides g++ [file name] [file name]
//you can add -c after g++ to create .o(object files) files. 
//if you want to keep the text hidden, use .o files to compile instead of .cpp files
//if you don't, then just use .cpp files