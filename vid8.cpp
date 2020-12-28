#include <iostream>

using std::cout;
using std::cin;

int main(){
    int slices; 
    cout << "input?" << std::endl;
    cin >> slices;
    //>> and << point to the directions of console flow. cin will give value to slices while a value is given to cout
    cout << "you have " << slices << " slice(s) of apples";
}