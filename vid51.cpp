#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main(){
    vector<int> data  = {1,2,3};
    data.push_back(12);//add
    cout << data[3];//access
    data.pop_back();//remove

    //https://www.geeksforgeeks.org/vector-in-cpp-stl/
    //^a list of useful vector methods
}