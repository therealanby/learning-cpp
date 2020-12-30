#include <iostream>
#include <string>

using std::cout;
using std::string;

int main(){
    string s = "the dog jumped over the log";
    int i = s.find("log");//returns the index of the argument(-1 I assume if not found)

    string sS = s.substr(0,5);//substring from index 0 and the next 5 characters
    int j  = s.find_first_of("o");//first instance of char
    if(s.find_first_of("!")==-1) cout << "not found";
    //^char testing

    //== for comparing strings. (unlike in java where you have to use .equals())
    //.compare() for comparing. -1 if preccedes, 0 if equivalent, and 1 if succedes
}