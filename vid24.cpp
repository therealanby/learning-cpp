#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;

int main(){
    //String class > C strings

    string greeting = "hello";
    //treated like an array of chars
    char c = greeting[0];
    //return the first char in greeting

    string g;
    
    cout << g << "\n";
    cout <<c;

    //+ for concatenation 
    //+= for appending
    //.length() for getting length (num of character)

    //______________________________________________________
    char name[] = "bob"; //c string (an array of characters)
    //bad because the size is fixed. 
    //less flexible
    
}