#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print_vect(vector<int> d){ //this is passing by value
    for(int i = 0; i<d.size();i++){
        cout <<d[i] << " ";
    }
}

void print_vect2(vector<int> &d){//passing by reference (add &)
    for(int i = 0; i<d.size();i++){
        cout <<d[i] << " ";
    }
}
//passing by value will only pass the value meaning that the variable passed in won't be affected. However, passing by reference will


int main(){
    vector<int> data = {1,2,3};
    print_vect(data);
}