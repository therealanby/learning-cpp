#include <iostream>

using std::cout;

int main(){
    //expressions and operators
    //op: +, -, *, /, %
    //assignment op: =
    //... some more

    //pemdas
    //() is also allowed for forced order

    //assignment ops are right to left
    //arithmetic ops are left to right
    int x,y;
    x = 10;
    y = x = 100;
    cout <<x << "\t" <<y;
    //as seen, right to left for assignments
}