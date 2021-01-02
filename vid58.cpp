#include <iostream>
#include<vector>

using namespace std;

int main(){
    int data[] = {1,2,3,4,5,6};

    for(int i:data){
        cout << i;
    } //for-each loop
    //useful for going through elements in an array without caring about the index
    //structure -> for([data type stored] : [name of collection/datastructure]){}
}
