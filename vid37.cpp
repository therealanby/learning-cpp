#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i<11; i++){
        cout << i << "\n";
    }
    for(int i = 9;i>=0;i--){
        cout << i << "\n";
    }
    int fact = 5;
    for(int i = fact-1;i>0;i--){
        fact *= i;
    }
    cout << fact;

    //start at 0, <10 : 10
    //start at 1, <10 : 9

}