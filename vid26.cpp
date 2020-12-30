#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(){
    //.length() and .size() gets the size 
    //modifiers
    string s = "a";
    s += "b"; //appends b to the end
    s.append("b"); //alternative way

    s.erase(s.length()-1, 1);//erase a range of characters (one number starting from the last index)
    s.replace(0, 4, "abcd");//replaces 4 characters form 0 with "abcd"
    s.insert(1,"    ");//inserts at index 1 of string

    s.pop_back(); //removes last

    cout << s;
}