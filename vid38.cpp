#include <iostream>
using namespace std;//faster to type out and it's okay since we're not using anythign else. usually you don't want to use this because of bad practice and conflicting names

int main(){
    
    int i = 5;//initialization should be outside the loop
    while(i>0){
        cout << i << " ";
        i--;//update should be at end
    }

    int fact = 10;
    i = fact;
    while(i>1){
        fact *= i;
        i--; 
    }
    cout << fact;
}