#include <iostream>
using namespace std;

int main(){

    int guesses[20];
    int guess[] = {10,12,32,122};//if you know the values before hand
    int index2 = guess[2];//this is how to get an element from an index
    guess[3] = 200; //updating element at index

    int num_elements = 5; //variable to store number of elements
    int size = sizeof(guess)/sizeof(guess[0]);//do this to get the size with sizeof operator

    for(int i:guess){
        cout << i << "\n";
    }//for each loop 

    int guess2[10] = {1,2};//this is how to inialize the size and a few values
}