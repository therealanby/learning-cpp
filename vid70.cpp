#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b; 
    b = a;
}
void swap(std::string &a, std::string &b){//overload but for strings
    std::string temp =  a;
    a = b;
    b = temp;
}

struct Rect{
    double length;
    double width;

}; //structure (more on this later)

double area(double l, double w){
    return l*w;
}

double area(double l){ //overload but to calculate for squares
    return l*l;
}

int main(){
    Rect r;
    r.length = 1;
    r.width = 1;//a struct is kinda like a class

}