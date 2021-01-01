#include <iostream>
using namespace std;

void print_arr(int array[], int size){

    //cout << sizeof(array) << "\n";//using pointer. the passed arg becomes a pointer
    cout << size << "\n";
    for(int i = 0;i<size;i++){
        cout << array[i] << " "; 
    }
}


int main(){

    int guess[10] = {12, 23, 42};
    //when calling an array, you don't need brackets unless you want to access its elements
    cout << sizeof(guess) << "\n";
    print_arr(guess, 3);
}