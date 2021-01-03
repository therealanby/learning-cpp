#include<iostream>

void swap(int &a, int &b){//int& a works too
    int temp = a;
    a = b;
    b = temp;

    std::cout << a <<" "<< b << "\n";
}

int main(){
    int a,b;
    a = 10;
    b = 22;

    swap(a,b);

    std::cout << a << " " << b;
}